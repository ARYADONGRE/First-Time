#include<iostream>
using namespace std;


void Reverse_Array(int arr[],int n)
{                                         //time Complexity Order of n      
    int start = 0;
    int end = n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;     //start += 1;
        end--;         //end -= 1
    }
}

int main()
{
    int arr[]={10,100,20,30,40,50,60,70,80};

    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }
  cout<<endl;
    Reverse_Array(arr,n);

      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }

    return 0;
}