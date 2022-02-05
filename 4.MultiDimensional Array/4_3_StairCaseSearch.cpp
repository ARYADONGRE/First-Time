#include<iostream>
using namespace std;

pair<int,int> StairCase_Sort(int arr[][10],int n,int m,int key)
{
    int i=0;
    int j=n-1;

    if(key<arr[0][0] || key>arr[n-1][m-1])
    {
        return {-1,-1};
    }

    while(i<n && j>=0)
    {
        if(arr[i][j]==key)
        {
            return{i,j};
        }
        else if(arr[i][j]<key)
        {
            i++;
        }
        else 
        {
            j--; 
        }
    }
    return{-1,-1};
}


int main()
{
    int arr[][10]={{10,20,30,40},
                  { 12,24,36,48},
                  { 13,25,37,49},
                  { 26,50,74,98}};

    int n=4,m=4,key;
    cout<<"Enter the Key "<<endl;
    cin >>key;
  

 pair<int,int> Cordi = StairCase_Sort(arr,n,m,key);

 cout<<Cordi.first<<" "<<Cordi.second<<endl;

    return 0;
}