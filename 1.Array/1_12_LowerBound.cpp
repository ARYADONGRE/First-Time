#include<iostream>
using namespace std;
int main()
{

int arr[]={1,2,5};
int n=sizeof(arr)/sizeof(int);
int x=4;
for(int i=0;i<n;i++)
{
if(arr[i]<=x && arr[i+1]>x)
{
    cout<<arr[i]<<endl;
}

}

return 0;
}