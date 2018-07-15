#include<iostream>
#include<math.h>
using namespace std;
bool mark[10000007];
int prime[3000000];
int nprime,flag=0;
void sieve(int n)
{
    int i,j;
    int limit=sqrt(n * 1.)+2;
    mark[1]=1;
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    prime[nprime++]=2;
    for(i=3; i<=n; i++)
    {
        if(mark[i]==0)
        {
            prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }
}
int main()
{
    sieve(10000000);
    long long n,i,j,x;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for(i=1; i<=n/2 ; i++)
        {
            if(mark[i]==0)
            {
                x=n-i;
                if(mark[x]==0)
                {
                    int diff=x-i;
                    cout<<n<<" = "<<i<<" + "<<x<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
    }
    return 0;
}
