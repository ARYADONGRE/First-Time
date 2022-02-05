#include<iostream>
using namespace std;
//1
int getIthbit(int n,int i)
{
    int mask=(1<<i);
    return (n & mask) > 0 ? 1 : 0 ; 
}

//2
int clearIthbit(int n,int i)
{
    int mask = ~(1<<i);

    n= n & mask ;
    return n;
}

//3
int setIthbit(int n,int i)
{
    int mask =(1<<i);
    n=( n | mask );

    return n; 
}


//4
int updateIthbit(int n,int i,int v)
{
    n=clearIthbit(n,i); 
    int mask =(v<<i);
    n =n | mask;
    return n;
}


//5
int clearlastIthbit(int n,int i)
{
    int mask = (-1 << i);
    
    n = n & mask;

    return n;
}


//6
int clear_between(int n,int i,int j)
{
    int a = (~0)<<j+1;
    int b = 1<<i - 1;
    int mask = a | b;
    n = n & mask;

    return n ; 

}


//main
int main()
{
    int n = 5;
    cout<<getIthbit(n,0)<<endl;;

    cout<<clearIthbit(n,0)<<endl;

    cout<<setIthbit(n,1)<<endl;

    cout<<updateIthbit(n,1,1)<<endl;

    cout<<clearlastIthbit(15,3)<<endl;

    cout<<clear_between(31,2,5)<<endl;

    return 0;
}