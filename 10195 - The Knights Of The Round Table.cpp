#include<iostream>
using namespace std;
#include<math.h>
#include<iomanip>
int main()
{
    double a,b,c,s,r,area;
    while(cin>>a>>b>>c)
    {
        if(a<=0 || b<=0 ||c<=0)
        {
            cout<<"The radius of the round table is: 0.000"<<endl;
        }
        else
        {
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            r=(2*area)/(a+b+c);
            cout<<setprecision(3)<<fixed;
            cout<<"The radius of the round table is: "<<r<<endl;
        }
    }
    return 0;
}
