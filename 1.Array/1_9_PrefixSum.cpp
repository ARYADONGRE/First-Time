#include <iostream>
using namespace std;
 
int Prefix_Sum(int *arr, int n)     //order of n^2
{  

    int Prefix[100] = {0};
    Prefix[0] = arr[0];

     cout<<Prefix[0]<<" ";
    for (int i = 1; i < n; i++)
    {
        Prefix[i] = Prefix[i - 1] + arr[i];
        cout<<Prefix[i]<<" ";
    }

    int F_sum = 0,T_sum ;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            T_sum = i > 0 ? Prefix[j] - Prefix[i - 1] : Prefix[j]; //if/else Turnary operator
        }
          F_sum = max(F_sum , T_sum);
    }
    return F_sum;
}

int main()
{
    int arr[] = {1, -2, 4, -6, 11, -7, 8,1};
    int n = sizeof(arr) / sizeof(int);

    int s = Prefix_Sum(arr, n);

    cout << "Largest Sum is : " << s << endl;

    return 0;
}