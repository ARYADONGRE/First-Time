#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr ={1,2,3,4,5};

    arr.pop_back(); //Delete Last Element 
     
    arr.push_back(15); //Add an Element in Vector

    int v=10;
    for(int i=0;i<7;i++)
    {
        arr.push_back(v);
        v=v+2;
    }

    cout<<"Size of arr is : "<<arr.size()<<endl;

    cout<<"Capacity is : "<<arr.capacity()<<endl ;


    for(int i=0;i<arr.size();i++)
    {
        cout<< arr[i] <<" ";
    }


   /* for(int v :arr)   //For Each Loop Special 
    {  
        cout<<v<< " ";
    }*/

    cout<<endl;


    cout<<endl;

    // Fill Constructor

    vector<int> Fill (10,0);

    for(int i=0;i<Fill.size();i++)
    {
        cout<< Fill[i] <<" ";
    }
    
    
return 0;
}
