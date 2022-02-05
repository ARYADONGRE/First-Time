#include<iostream>
using namespace std;

int main()
{
 char sentence[1000];

 cin.getline(sentence,1000,'x');    // line breaks at x here , i.e. 3rd parameter.
  //cin.getline(sentence,1000);     // Without it line breaks when we press enter i.e'\n'

 cout<<sentence<<endl;
  
  return 0;

}