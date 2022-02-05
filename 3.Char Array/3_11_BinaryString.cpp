#include<iostream>
#include<cstring>
using namespace std;
int Power(int);

int Binary(string str,int n)
{
    int Final=0;
    for(int i=n-1;i>=0;i--)
    {
        Final += stoi(str[i]) * Power(i-1);
        
    }
    cout<<Final;
    return Final;
}

int Power(int i)
{
    int p=1;
 for(int j=0;j<=i;j++)
 {
     p=p*2;
 }
 cout<<p<<endl;
 return p;

}


int main()
{
    string str="001";
    int n=str.length();
   cout<<"The value in Decimal is "<<Binary(str,n)<<endl;

    return 0;
}