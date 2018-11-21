#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int A[100000000];
long long int cnt,c;
int decToBin(long long int n)
{
    long long  int i;
    cnt=0;
    c=0;
    while(n>0)
    {
        A[cnt]=n%2;
        cnt++;
        n=n/2;
    }
    for( i=cnt-1; i>=0; i--)
    {
        if(A[i]==1)
        {
            c++;
        }
    }
    memset(A,0,sizeof A);
    return c;
}
int main()
{
    long long int i,j,T,n,sum,flag,k,base,p;
    vector<int>v;
    string s;
    cin>>T;
    while(T--)
    {
        n=0;
        p=1;
        cin>>s;
        for(i=s.size()-1; i>=0; i--)// string to integer
        {
            n=n+(s[i]-48)*p;
            p=p*10;
        }
        for(i=0; i<s.size(); i++)
        {
            flag=0;
            for(j='A'; j<='F'; j++)
            {
                if(s[i]==j)
                {
                    k=s[i]-55;
                    v.push_back(k);
                    flag=1;
                }
            }
            if(flag==0)
            {
                v.push_back(s[i]-48);
            }
        }
        sum=0;
        base=1;
        for(i=v.size()-1; i>=0; i--)//hexa to decimal
        {
            sum=sum+v[i]*base;
            base =base*16;
        }
       cout<<decToBin(n)<<" "<<decToBin(sum)<<endl;
        v.clear();
    }
    return 0;
}
