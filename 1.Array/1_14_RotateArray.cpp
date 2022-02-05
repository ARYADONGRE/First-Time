#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
      int n=sizeof(a)/sizeof(int);
      int k=3;
      int x;
      int end;   
    for(int i=0;i<5;i++)
    {
        end=a[n-1];
        for(int j=n-1;j>=1;j--)
        {
             // a[n-1]=end;
            a[j]=a[j-1];
        
            
        }
        a[0]=end;
      
        for(int p=0;p<n;p++)
        {
            cout<<a[p]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}