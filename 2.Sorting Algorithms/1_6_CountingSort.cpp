#include<iostream>
using namespace std;

void Counting_Sort(int *arr,int n)
{
    int Large =-1;
    for(int i=0;i<n;i++)
    {
        Large=max(Large,arr[i]);
    }
    int *cnt = new int [Large+1]{0} ;
   

    for(int j=0;j<n;j++)
    {
       cnt[arr[j]]++;
    }
    int j=0;   //index of arr
    
    for(int i=0;i<Large+1;i++) //index of cnt
    {
        while(cnt[i]>0)
        {
            arr[j]=i;
            cnt[i]--;
            j++;

        }
    }
    

   



}


int main()
{
    int arr[]={1,56,78,4,65,98,12,0,55,65,55,33}; //Array is Bounded in Between (0 -> 100)
    int n=sizeof(arr)/sizeof(int);

    Counting_Sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}