#include<iostream>
using namespace std;

int Max_Sum(int *arr,int n)     //(order of n^3)
{
    int F_sum =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int T_sum=0;
            for(int k=i;k<=j;k++)
            {
                T_sum += arr[k];              //Tsum = T_sum + arr[k];
            }
            F_sum = max(F_sum, T_sum);
        }
    }
    return F_sum;
}

int main()
{
    int arr[]={1,-2,4,-6,11,-7,8,1};
    int n=sizeof(arr)/sizeof(int);

    int s=Max_Sum(arr,n);

    cout<<"Largest Sum is : "<<s<<endl;
    return 0;
}