#include<iostream>
#include<math.h>
using namespace std;
bool mark[10000007];
int prime[3000000];
int nprime;
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
    long long int i,n,A,B,length;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for(i=n; i>1; i--)
        {
            if(mark[i]==0)
            {
                A=i;
                break;
            }

        }
        for(i=n; i<=10000000; i++)
        {
            if(mark[i]==0)
            {
                B=i;
                break;
            }
        }
        length=B-A;
        cout<<length<<endl;
    }

    return 0;
}
