#include<iostream>
using namespace std;

int main()
{
    char a[]={'a','r','y','a'};  // Wrong
    char b[]={'b','h','a','i','\0'}; // Fine
    char c[]="Dongre";              //Best

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}