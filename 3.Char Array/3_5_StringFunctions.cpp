#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  char a[100]="Arya";
  char b[100];

  cout<<" Length of String : "<<strlen(a)<<endl;

  strcpy(b,a);   //-> Copy content of a in b . Ulta asta writing means (b,a).

  cout<<" b string is : "<<b<<endl;

  char c[100]=" Dongre";

  strcat(a,c); // -> Add c at the end of a , I.E. string a then string c.

  cout<< "New a string is : "<<a<<endl; 

  cout<<"Comparison between a & b : " <<strcmp(a,b)<<endl;

  //Here a=Arya Dongre and b=Arya as a is greater so answer is 1

return 0;
}