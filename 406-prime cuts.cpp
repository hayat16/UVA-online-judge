#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
bool mark[10000007];
int prime[300000];
int nprime;
void sieve(int n)
{
    mark[10000007]=0;
    prime[300000]=0;
    nprime=0;
    int i,j,limit=sqrt(n*1.)+2;
    mark[1]=0;
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    prime[nprime++]=1;//jehetu (1) k o prime dorse
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
    long long int N,C,l,diff,c,i;
    while(cin>>N>>C)
    {
        sieve(N);
        c=0;
        for(i=0; i<nprime; i++)
        {
            c++;
        }
        if(c%2==0)
        {
            l=2*C;
        }
        else
        {
            l=2*C-1;
        }
        diff=nprime-l;
        for(i=0; i<diff/2; i++)//purata te k l poriman bad dia ja ta k oita k 2 dia divide kore
        {
            mark[prime[i]]=1;
        }
        for(i=nprime; i>=diff/2+l; i--)
        {
            mark[prime[i]]=1;
        }
        if(l>c)
        {
            cout<<N<<" "<<C<<":";
            for(i=1; i<=N; i++)
            {
                if(mark[i]==0)
                {
                    cout<<" "<<i;
                }
            }
        }
        else
        {
            cout<<N<<" "<<C<<":";

            for(i=1; i<=N; i++)
            {
                if(mark[i]==0)
                {
                    cout<<" "<<i;
                }
            }
        }
        cout<<endl<<endl;
        memset(prime,0,sizeof prime);
        memset(mark,0,sizeof mark);
        nprime=0;

    }
    return 0;
}
