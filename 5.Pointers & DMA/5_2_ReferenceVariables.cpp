#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x; //Denotes X and Y are same identity (only one) with two different names stored at same memory
   
    y++;
    x++;    //As X and Y are same memory Indirectly X is increased even if y++ and Vice a versa 

    cout<<y<<endl;

    cout<<x<<endl; 

return 0;
}