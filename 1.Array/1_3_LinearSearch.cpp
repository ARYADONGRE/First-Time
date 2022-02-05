#include<iostream>

using namespace std;                        //// search in order of n --> O(n)  --> Time
 
int linear_Search (int *arr,int n ,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={11,12,13,45,65,9,1,56,6,10};

    int n=sizeof(arr)/sizeof(int);

    int key;
    cout<<" Enter no to search ";
    cin>>key;

    int index = linear_Search(arr,n,key);

    if(index!=-1)
    {
        cout<<key<<" Found at "<<index+1<<endl;
    }
    else
    {
        cout<<key<<" NOT Found . "<<endl;
    }
    return 0;
}