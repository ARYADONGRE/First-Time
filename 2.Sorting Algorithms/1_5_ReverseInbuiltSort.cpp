#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b)  //(arr --> arr+n)
{
    return a>b;
}

int main()
{
    int arr[]={-12,6,-4,55,10,0,-65,11,-1};
    int n=sizeof(arr)/sizeof(int);

   /* sort(arr,arr+n,compare);*/
    
    
   /* sort(arr,arr+n);
    reverse(arr,arr+n);
    */    

    sort(arr,arr+n,greater<int>()); 
    


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;

}