#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int A[100009];
long long int B[10000];

int main()
{
    long long int T,n,i,j,sum,max,c=0,temp;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>A[i]>>B[i];
        }
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(B[j]>B[j+1])
                {
                    temp=B[j];
                    B[j]=B[j+1];
                    B[j+1]=temp;

                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }

        }
        max=0;
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=i;j<n;j++)
            {
               sum=sum+B[i]*A[j];
            }
            if(max<sum)
            {
                max=sum;
            }
        }
        cout<<"Case "<<++c<<": "<<max<<endl;
        for(i=0;i<n;i++)
        {
            A[i]=0;
            B[i]=0;
        }
    }

    return 0;
}
