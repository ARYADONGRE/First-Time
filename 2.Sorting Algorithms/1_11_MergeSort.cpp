#include<iostream>
#include<vector>
using namespace std;


void merge(int *arr,int s,int e)
{
    int i=s;
    
    int m=(e+s)/2;
    int j=m+1;
    vector<int> v;

    while(i<=m && j<=e)
    {
        if(arr[i]<arr[j])
        {
            v.push_back(arr[i]);
            i++;
        }
        else
        {
            v.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m)
    {
        v.push_back(arr[i]);
        i++;
    }

    while(j<=e)
    {
        v.push_back(arr[j]);
        j++;
    }
  int k=0;
    for(int i=s;i<=e;i++)
    {
        arr[i]=v[k++];
    }

    return ;

}


void merge_sort(int arr[],int s ,int e)
{
    if(s>=e)
    {
        return ;
    }
    int mid=(e+s)/2;

    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);

    return merge(arr,s,e);
}

int main()
{
    int arr[]={10,2,0,7,6,4};
    int s=0;
    int e=(sizeof(arr)/sizeof(int))-1;

    merge_sort(arr,s,e);

    for(int i=0;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}