#include<iostream>
using namespace std;  
                                //Kadane Algorithm it's order of n --> means linear so fast and needs low memory
int Kadane_Sum(int *arr,int n) 
{
    int cv=0;   //common value
    int mv=0;   //Max value

    for (int i=0;i<n;i++)
    {
        cv += arr[i];
        if(cv<0)
        {
            cv=0;
        }
        mv=max(mv,cv);
    }
    return mv;
}


int main()
{
   
    int arr[] = {1, -2, 4, -6, 11, -7, 8,1};   //  int arr[]={2,-6,9,-10,5,2,-6,3,7,3};

    int n=sizeof(arr)/sizeof(int);

    int s=Kadane_Sum(arr,n);

    cout<<"The Largest value is : "<<s<<endl;

    return 0;
}