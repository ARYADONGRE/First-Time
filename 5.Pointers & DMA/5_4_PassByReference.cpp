#include<iostream>
using namespace std;

void Tax_Income(float & money)      //int &income =income ; Reference Variable 
                                    // of int & money =income ; Reference Variable
{
    float tax = 0.20;
     money = money -  money*tax; 
}


int main()
{
    float income;
    cin>>income;

    Tax_Income(income);

    cout<<income<<endl;

    return 0;
}