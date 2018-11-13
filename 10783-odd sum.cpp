#include<iostream>
using namespace std;
int main()
{
    long long int T,a,b,sum,c=0,i;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        sum=0;
        for(i=a;i<=b;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        cout<<"Case "<<++c<<": "<<sum<<endl;
    }
    return 0;
}
