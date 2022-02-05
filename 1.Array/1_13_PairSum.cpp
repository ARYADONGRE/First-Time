#include<iostream>
using namespace std;
int main()

{
 int arr[]={10,22,28,29,30,40};
 int n=sizeof(arr)/sizeof(int);
 int r=n-1,l=0,nr,nl,diff=INT_MAX;
 int x=54;
 while(l<r)
 {
     if(abs(arr[l]+arr[r]-x )< diff)
     {
         nl=l;
         nr=r;
         diff=abs(arr[l]+arr[r]-x);
     }

     if(arr[l]+arr[r]>x)
     {
         r--;
     }
     else
     {
        l++; 
     }
 }

 cout<<arr[nl]<<"  "<<arr[nr]<<endl;

return 0;
}