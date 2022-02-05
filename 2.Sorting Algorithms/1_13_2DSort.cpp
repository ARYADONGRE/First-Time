#include<iostream>
using namespace std;

void merge(int *a[],int s1,int s2,int n)
{
    int i=s1;
    
    int j=s1;
    while(s1<=mid)
    {
        while(s2<=mid)
        {
            if(a[s1][s2]<a[s1])
        }
    }
}



void help(int *a[],int s1,int s2,int n)
{
    int m=max(s1,s2);
    int mid= (n+m)/2;
       help(v,0,0,mid);
    help(v,0,mid+1,n);
    help(v,mid+1,0,n);
    help(v,mid+1,mid+1,n);

    return merge(*a[],s1,s2,n)
    
}



void 2D_sort(int a[][],int n,int m)
{
    if(n==m && n==0)
    {
        return ;
    }
    help(v,0,0,n);

}



int main()
{
int arr[][4]={ {5,4,6,9}, {11,25,34,47} , {19,33,60,69} , {2,1,3,4} };

2D_sort(arr,3,3);

for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}