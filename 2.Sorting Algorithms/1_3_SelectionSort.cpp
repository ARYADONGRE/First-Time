#include<iostream>
using namespace std;

void Selection_Sort(int *arr,int n)
{
for(int i=0;i<n;i++)
{
    int current =arr[i];
    int min = i;
    for(int j=i;j<n;j++)
    {
      if(arr[j]<arr[min])
      {
          min=j;
      }
    }
    swap(arr[min],arr[i]);
}

}



int main()
{
      int arr[]={-12,6,-4,55,10,0,-65,11,-1};
    int n=sizeof(arr)/sizeof(int);

Selection_Sort(arr,n);

  for(int i=0;i<n;i++)
    {

    cout<<arr[i]<<" ";
    }

return 0;
}