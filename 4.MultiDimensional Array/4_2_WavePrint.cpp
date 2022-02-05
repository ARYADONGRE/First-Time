#include<iostream>
using namespace std;

void Wave_Print (int a[][10],int n,int m)
{
    int sr=0;
    int sc=0;
    int er=n-1;
    int ec=m-1;
    int xyz=sr;

    for(int col=ec;col>=sc;col--)
    {
       if (xyz==sr)
          {
          for( int row=sr;row<=er;row++)
           {
            cout<<a[row][col]<<" ";
           } 
           xyz=er;
    
          }

       else if(xyz==er)
        {
            for( int row=er;row>=sr;row--)
            {
                cout<<a[row][col]<<" ";
            }
            xyz=sr;
            
        }
        
    }
}


int main()
{
      int a[][10]= { {1,2,3,4,45},
                   {5,6,7,8,46},
                   {9,10,11,12,47},
                   {13,14,15,16,48}};

    int n=4,m=5;
    Wave_Print(a,n,m);

    return 0;
}