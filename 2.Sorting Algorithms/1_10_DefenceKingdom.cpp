#include<iostream>
using namespace std;

int Defence (int a[15][8] ,int x,int y)
{
  int b[15][8]={0};
  int p,q;

   a[2][7]=1;
   a[10][1]=1;
   a[8][5]=1;
 
    for(int i=0;i<15;i++)
    {
      for(int j=0;j<8;j++)
      {
        if(a[i][j]!=0)
        {
          p=i;
          q=j;
          for(int z=0;z<15;z++)
          {
            b[z][q]=a[p][q];
          }
          for(int j=0;j<8;j++)
          {
            b[p][j]=a[p][q];

          }
          i=p;
          j=q;
        }
      }

    }

    for(int i=0;i<15;i++)
    {
      for(int j=0;j<8;j++)
      {
        cout<<b[i][j]<<"  ";
      }
      cout<<endl;
    }  
    
    int cv=0;
    int mv=0;
    for(int i=0;i<15;i++)
    {
           cv +=1;
       
        
        if(b[i][0]!=0)
        {
          cv=0;
        }
        cout<<cv<<endl;;
           mv=max(cv,mv);
    }
    int _cv=0;
    int _mv=0;

    for(int j=0;j<8;j++)
  {
     _cv +=1;

     if(b[0][j]!=0)
     {
       _cv=0;
     }
     _mv=max(_cv,_mv);
  }

     



    return mv*_mv;
}

int main()
{
    // int arr[15][8]={0};
    int a[15][8]={0};;

   
    int mhor=-1;
    int hor=0;
    int p,q;

   int sq = Defence(a,15,8);
   cout<<"Max is "<<sq<<endl;
 
   
    return 0;
}