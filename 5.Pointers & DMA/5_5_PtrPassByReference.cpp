#include<iostream> 
using namespace std;

void Ptr_reference(int *var)  ///int *var =&sam; like this same memory Block
{
    *var=*var+1; 
    
}
int main()
{
    int sam=100;

    Ptr_reference( & sam);

    cout<<sam<<endl;

    return 0;
}