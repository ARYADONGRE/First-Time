#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here
    vector<pair<int,int>> T(10);
    int cnt =0;
    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            if(arr[i][j]==0)
            {
                T[cnt].first=i;
                T[cnt].second =j;
                cnt++;
            }
        }
    }
    cnt--;
    cout<<cnt<<endl;

     while(cnt>=0)
     {
    for(int i=0;i<arr.size();i++)
    {
      arr[i][T[cnt].second] =0;  
    }     

    for(int j=0;j<arr[ T[cnt].first].size();j++)
     {
           arr[ T[cnt].first][j]=0; 
     }
        cnt--;
     }
    
return arr;
    
}


int main()
{
    vector <vector <int>> arr ={{5,4,3,9},{2,0,7,6},{1,3,4,0},{9,8,3,4}};

    vector<vector<int >> it = makeZeroes(arr);

    for(int i=0;i<it.size();i++)
    {
        for(int x : it[i] )
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
} 