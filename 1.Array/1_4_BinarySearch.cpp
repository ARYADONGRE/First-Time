#include<iostream>
using namespace std;

int Binary_Search (int *arr,int n,int key)  //  order of (log(n)/log(2))  -->> n is total elements in array
                                         //  if n=1000  (log(1000)/log(2))==10 approx means only 10 steps to search
{                                         // Only array should sorted (monotonic --> increasing or decreasing ) 
    int start = 0;
    int end = n-1;
    
    while(start<=end)
    {
        int mid =(start+end)/2;
        
        if(arr[mid]==key)
        {
            return mid ;
        }

        else if (arr[mid]<key)
        {
            start =mid+1;
        }

        else
        {
            end=mid-1;
        }
        
    }

    return -1;
    

}

int main()
{
    int arr[]={1,2,3,4,5};

    int n = sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter Element : ";
    cin>>key;

    int index = Binary_Search(arr,n,key);

    if(index!=-1)
    {
        cout<<key<<" Found at "<<index+1<<endl;
    }
    else
    {
        cout<<" NOT found ."<<endl;
    }

    return 0;
}
