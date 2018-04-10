#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    string s;
    int c=0;
    while(getline(cin,s))
    {

        if(s=="#")
        {
            break;
        }
        else if(s=="HELLO")
        {
            cout<<"Case "<<++c<<": ENGLISH"<<endl;
        }
        else if(s=="HOLA")
        {
            cout<<"Case "<<++c<<": SPANISH"<<endl;
        }
        else if(s=="HALLO")
        {
            cout<<"Case "<<++c<<": GERMAN"<<endl;
        }
        else if(s=="BONJOUR")
        {
            cout<<"Case "<<++c<<": FRENCH"<<endl;
        }
        else if(s=="CIAO")
        {
            cout<<"Case "<<++c<<": ITALIAN"<<endl;
        }
        else if(s=="ZDRAVSTVUJTE")
        {
            cout<<"Case "<<++c<<": RUSSIAN"<<endl;
        }
        else
        {
            cout<<"Case "<<++c<<": UNKNOWN"<<endl;
        }
    }
    return 0;
}
