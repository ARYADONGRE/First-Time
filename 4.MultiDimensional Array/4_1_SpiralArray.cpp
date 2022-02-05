#include<iostream>
using namespace std;


void Spiral_Print(int a[][10],int n,int m)
{
    int sr=0,sc=0;
    int er=n-1,ec=m-1;

    while(sc<=ec && sr<=er)
    {

        
        for(int col=sc;col<ec;col++) //upper row
        {
            cout<<a[sr][col]<<" ";
        }

        for(int row=sr;row<er;row++)  // end column
        {
            cout<<a[row][ec]<<" ";
        }

        
        for(int col=ec;col>sc;col--) // end row
        {
            if(sc==ec)
            {
                break;
            }
            cout<<a[er][col]<<" ";
        }


        for(int row=er;row>sr;row--) //start column
        {
            if(sr==er)
            {
                break;
            }
            cout<<a[row][sc]<<" ";
        }

        sr++;
        sc++;
        er--;
        ec--;
    }

}


int main()
{
    int a[][10]= { {1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};

    int n=4,m=4;
    Spiral_Print(a,n,m);

    return 0;
    
}