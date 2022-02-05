#include<iostream>
using namespace std;

int Replace_bits(int a, int b ,int i ,int j)
{
    int x = (~0)<<j+1;
    int y = 1<<i -1 ; ////Naya hai yaha
    a = a & (x|y) ;

    b = b << i ;

    a = a | b ;

    return a;

}

int main()
{
   int a = 127;
   int b = 9 ;
   int cc =Replace_bits(a,b,1,4);
    cout<<cc<<endl;
    return 0;
}