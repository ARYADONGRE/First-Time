#include <iostream>
using namespace std;

class Vector
{
    int *arr;
    int cs;
    int ms;

public:
    Vector(int max_size=1)
    {
        cs = 0;
        ms = max_size;
        arr = new int[ms];
    }

    void push_back(int d)
    {
        if (cs == ms)
        {
            int *oldarr = arr;
            ms = ms * 2;

            arr = new int[ms];

            for (int i = 0; i < cs; i++) //Copy Arr Elements
            {
                arr[i] = oldarr[i];
            }

            delete[] oldarr; // Free up space / Destroy Old Array
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    int front() const
    {
        return arr[0];
    }

    int back() const
    {
        return arr[cs - 1];
    }

    int size() const
    {
        return cs;
    }

    int capacity() const
    {
        return ms;
    }

    int at(int i) const
    {
        return arr[i];
    }

    int operator[](const int i) const
    {
        return arr[i];
    }
};

int main()
{

    Vector v(6);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(85);
    v.push_back(6);
 
    v.pop_back();
   
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<v.at(3)<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

return 0;
}