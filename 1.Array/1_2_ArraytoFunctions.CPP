#include <iostream>
using namespace std;

void printarr(int *arr, int n )
{
    int i;

    arr[0]=45;      /// As the address comes to function editing array in function will lead to change in main also
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    arr[4]=108;

    cout<<endl;
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55};

    int n = sizeof(arr) / sizeof(int);

     printarr(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    
    cout<<endl;
   
   

    return (0);
}