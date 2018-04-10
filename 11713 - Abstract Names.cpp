#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    int t;
    string s1,s2;
    cin>>t;
    while(t--)
   {
     cin>>s1>>s2;
    int l=s1.size();
    int l2=s2.size();
    for(int i=0;i<l;i++)
    {
      if(s1[i]=='a' ||s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u' )
      {
          s1[i]='*';

      }
    }
    for(int i=0;i<l2;i++)
    {
      if(s2[i]=='a' ||s2[i]=='e' ||s2[i]=='i' ||s2[i]=='o' ||s2[i]=='u' )
      {
          s2[i]='*';

      }
    }
    if(s1==s2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }
    return 0;
}


