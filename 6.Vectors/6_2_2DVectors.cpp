#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector < vector <int>> arr={{1,2,3},{4,5,6,7},{8,9,10},{11,12}}; 
                                                    //Same as Dynamic Array First Vector Indicates Rows and later that 
                                                    //Row Vector indicates at various columns
    arr[0][0]=55;

    for(int i=0;i<arr.size();i++)
    {
        for(int x :arr[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

return 0;
}