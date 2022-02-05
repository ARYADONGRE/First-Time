#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[6][6]={0};
    arr[0][1]=1;
    arr[0][2]=1;
    arr[1][0]=1;
    arr[1][3]=1;
    arr[1][4]=1;
    arr[2][1]=1;
    arr[3][1]=1;
    arr[3][2]=1;
    arr[3][5]=1;
    arr[4][0]=1;
    arr[4][3]=1;
    arr[4][4]=1;
    arr[5][1]=1;

    int x,y;
    cout<<"Enter x and y : ";
    cin>>x>>y;
    int S1=0,S2=0,S3=0,S4=0;
    int c[4]={0};
    
    int n=6,m=6;

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(arr[i][j]==1)
            {
                S1++;
            }
        }

        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                S2++;
            }
        }
    }
    S2=S2-S1;
    c[0]=S1;
    c[1]=S2;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(arr[i][j]==1)
            {
                S3++;
            }

        }
    }
    S3=S3-S1;
    c[2]=S3;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                S4++;
            }
        }
    }
    S4=S4-S1-S2-S3;
    c[3]=S4;

    cout<<"S1 :"<<S1<<"   "<<"S2 :"<<S2<<"   "<<"S3 :"<<S3<<"   "<<"S4 :"<<S4<<"   "<<endl;

    sort(c,c+4);

    cout<<"What you Get Max is that : "<<c[0]<<endl;


     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    


   

return 0;

}




