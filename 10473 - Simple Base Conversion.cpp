#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int A[100000000];
int main()
{
    long long int i,j,sum,flag,k,base,cnt,c,n;
    vector<int>v;
    string s;
    while(cin>>s)
    {
        sum=0;
        base=1;
        if(s[0]<'0')
        {
            break;
        }
        if(s[0]=='0' && s[1]=='x')
        {
            for(i=2; i<s.size(); i++)
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
            for(i=v.size()-1; i>=0; i--)
            {
                sum=sum+v[i]*base;
                base =base*16;
            }
            cout<<sum<<endl;
        }
        else
        {
            cnt=0;
            c=1;
            n=0;
            for(i=s.size()-1; i>=0; i--)
            {
                n=n+(s[i]-48)*c;
                c=c*10; //convert string to integer
            }
            while(n>0)
            {
                A[cnt] =n%16;
                cnt++;
                n=n/16;
            }
            cout<<"0x";
            for(i=cnt-1; i>=0; i--)
            {
                if(A[i]==10)
                {
                    cout<<"A";
                }
                else if(A[i]==11)
                {
                    cout<<"B";
                }
                else if(A[i]==12)
                {
                    cout<<"C";
                }
                else if(A[i]==13)
                {
                    cout<<"D";
                }
                else   if(A[i]==14)
                {
                    cout<<"E";
                }
                else   if(A[i]==15)
                {
                    cout<<"F";
                }
                else
                {
                    cout<<A[i];
                }

            }
            cout<<endl;
           for(i=0;i<=cnt;i++)
           {
               A[i]=0;
           }
        }
        s.clear();
        v.clear();
    }

    return 0;
}
