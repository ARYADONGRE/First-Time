#include<iostream>
using namespace std;

int main()
{
    int x=10;

    cout<< "Address of X : "<<&x <<endl;

    int *xptr = &x;
    //or in next line xptr = &x;
    cout<<"Address of X with Pointers : "<<xptr<<endl;

    // Pointer to a pointer

    cout<<"Simply Address of XPTR : "<<&xptr<<endl;

    int **xxptr;          //**xxptr = &xptr;
    xxptr =&xptr;
    cout<<"Address of X with Pointers : "<<xxptr<<endl;

    cout<<endl<<endl<<" 'DeReferencing Error' "<<endl<<endl;

    cout<<"Value at XPTR : "<<*(xxptr) <<endl;  //(What is on address of xptr) i.e. *(&xptr)

    cout<<"Value of x : "<<*(xptr)<<endl;  // (What is on Address of x)  i.e. *(&x)

    
    
    return 0; 


   

}