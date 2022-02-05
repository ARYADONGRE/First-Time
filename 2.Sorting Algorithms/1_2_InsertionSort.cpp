#include<iostream>
using namespace std;

void Insertion_Sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int prev =i-1;
        while(prev>=0 && arr[prev]>current)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }

    
    
    
}

int main()
{
    int arr[]={-12,6,-4,55,10,0,-65,11,-1};
    int n=sizeof(arr)/sizeof(int);

Insertion_Sort(arr,n);

  for(int i=0;i<n;i++)
    {

    cout<<arr[i]<<" ";
    }

return 0;


}