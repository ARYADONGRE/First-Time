#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &v,int s, int e)
{
    int i=s-1;
    int j=s;
    int temp=v[e];

    for(j=s;j<e;j++)
    {
        if(v[j]<temp)
        {
            i++;
            swap(v[j],v[i]);

        }
    }
    swap(v[e],v[i+1]);
    return i+1;
}


void quick_sort(vector<int> &v ,int s ,int e)
{
    if(s>=e)
    {
        return ;
    }

    int p=partition(v,s,e);
    quick_sort(v,s,p-1);
    quick_sort(v,p+1,e);
   
}



int main()
{

vector<int> v={10,2,0,7,6,4};

int s=0;
int e=v.size()-1;

quick_sort(v,s,e);

for(int x:v)
{
    cout<<x<<" ";
}

return 0;
}