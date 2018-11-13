#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long long int r,c,T,rowWise,colWise,total;
    cin>>T;
    while(T--)
    {
        cin>>r>>c;
        rowWise=r/3;
        colWise=c/3;
        total=rowWise*colWise;
        cout<<total<<endl;
    }
    return 0;
}
