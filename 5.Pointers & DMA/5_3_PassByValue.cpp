#include<iostream>
using namespace std;

void Tax_Income(float income)
{
    float tax = 0.20;
    income =income - income*tax; 
}


int main()
{
    float income;
    cin>>income;

    Tax_Income(income);

    cout<<income<<endl;

    return 0;
}