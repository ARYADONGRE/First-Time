#include<iostream>
using namespace std;

int main()
{
    char ch;
    ch=cin.get();
    int Digit=0;
    int Alpha=0;
    int Space=0;

    while(ch!='\n')
    {
        if(ch>='1'&& ch<='9' )
        {
            Digit++;
        }
        else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        {
            Alpha++;
        }
        else if(ch==' ')
        {
            Space++;
        }
        cout<<ch;
        ch=cin.get();
    }

    cout<<endl;
    cout<<"Digits : "<<Digit<<endl<<" Alphabates : "<<Alpha<<endl<<" Spaces : "<<Space<<endl; 

    return 0;

}