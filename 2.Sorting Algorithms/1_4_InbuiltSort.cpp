#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={-12,6,-4,55,10,0,-65,11,-1};
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;

}