#include <iostream>
using namespace std;

void printarr (int *arr)  //(int arr[] or *arr , int n)
{
    int a=sizeof(arr);

    cout<<"Size of array in Function is "<<a<<" ."<<endl;/////size of pointer is 4 bytes in my system

    for(int i=0;i<a;i++)   ///(i<n)
    {
        cout<<arr[i]<<" , ";
    }

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);

     cout<<"Size of array in Main is "<<n<<" ."<<endl;

    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" , ";

    }
    cout<<endl;
 
    printarr(arr);  ///(arr,n)

    return 0;
}