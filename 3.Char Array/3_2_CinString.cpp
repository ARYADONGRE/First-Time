#include<iostream>
using namespace std;
int main ()
{
   
   // cin>>a;        // space is not counted i/p - hare ram   o/p - hare  after space nothing is printed.
  
  
    /* Approach -> 1
    char temp = cin.get();
   int len=0;
    while(temp!='\n')
    {
        cout<<temp;
        len++;
        temp=cin.get();
    }  
    */
   // Approach -> 2
   
     char a[100];
     int length=0;
     char temp =cin.get();
     while(temp!='\n')
     {
         a[length]=temp;
         length ++; 
         temp=cin.get();

     }
     a[length]='\0';

    cout<<a<<endl;


    return 0;
}