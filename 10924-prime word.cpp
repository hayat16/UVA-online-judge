#include<iostream>
#include<math.h>
using namespace std;
bool mark[10000007];
int prime[300000];
int nprime;
int A[200];
void sieve(int n)
{
    int i,j;
    int limit=sqrt(n * 1.)+2;
    mark[1]=0;//aikane 1 k prime dorse
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    prime[nprime++]=1;
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
    sieve(1000000);
    long long int i,j,c=1,sum;
    string s;
    for(i=97; i<=122; i++)
    {
        A[i]=c;
        c++;
    }
    int k=27;
    for(i=65; i<=90; i++)
    {
        A[i]=c;
        c++;
    }
    while(cin>>s)
    {
        sum=0;
        for(i=0; i<s.size(); i++)
        {
            sum=sum+A[s[i]];
        }
        if(mark[sum]==0)
        {
            cout<<"It is a prime word."<<endl;
        }
        if(mark[sum]==1)
        {
            cout<<"It is not a prime word."<<endl;
        }
        s.clear();
    }
    return 0;
}
