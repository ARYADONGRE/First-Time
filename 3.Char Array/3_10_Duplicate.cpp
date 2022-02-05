#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="geeksforgeeksfx";
    string str1;
    int cnt=0,index=0;
    int n=str.length();
    
    for(int i=0;i<n;i++)
    {
        int j;
       for( j=0;j<i;j++)
       {
          if(str[i]==str[j])
          {
              break;
          }

       } 
       cout<<i<<" " <<j<<endl;
       if(j==i)
       {
           str[index++]=str[i];
       }
        

    }
    str[index]='\0';
    for(int i=0;i<index;i++)
    {
        cout<<str[i];

    }
    cout<<endl;
    return 0;
}