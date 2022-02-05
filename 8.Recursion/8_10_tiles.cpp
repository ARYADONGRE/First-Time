#include <iostream>
using namespace std;

int tillingProblem(int n, int m)
{
    if (n == m && n > 1)
    {
        return 2;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (m == 1)
    {
        return n;
    }
    int sum;
    if (n > m)
    {
        sum = 2 * tillingProblem(n - 1, m);
    }
    return (sum / 2) + 1;
}

int newtilling(int n, int m)
{
    
     if(n==0)
     {
         return 0;
     }
    
    if (n ==1)
    {
        return 1;
    }
    
    if(n==2)
    {
        return 2;
    }
    
    
   int i = newtilling(n - 1, m) + newtilling(n - m, m);
  

    return i;
}

int main()
{
    int n = 5, m = 3;

    // cout<< tillingProblem(n,m)<<endl;

    cout << newtilling(n, m) << endl;

    return 0;
}