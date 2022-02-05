#include<iostream>
using namespace std;

void Bubble_Sort(int *arr,int n)
{
    int temp;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];    //swap(a[j],a[j+1])
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[]={-12,6,-4,55,10,0,-65,11,-1};
    int n=sizeof(arr)/sizeof(int);

    Bubble_Sort(arr,n);

    for(int i=0;i<n;i++)
    {

    cout<<arr[i]<<" ";
    }

    return 0;
}