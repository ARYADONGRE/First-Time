#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr ={1,2,3,4,5,6,7,8,9};
       int n = arr.size();
   /* arr.pop_back();
    arr.push_back(45);

  // int n = arr.size();

    cout<<"Size is "<<n<<endl;

    cout<<"Capacity1 is "<<arr.capacity()<<endl;
    */
    arr.pop_back();
    arr.push_back(108);
   

    cout<<"Capacity2 is "<<arr.capacity()<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}