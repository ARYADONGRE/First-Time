#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char sentence[1000];
    char largest[1000];
    int n;
    cin>>n;
    cin.get();   //// to manipulate te process as after i/p of n we press enter i.e. '\n' is counted as string by cin.getline()
    int max_len=0;
    while(n--)
    {
        cin.getline(sentence,1000);
        int len =strlen(sentence);
        if(len>max_len)
        {
            max_len = len;
            strcpy(largest,sentence); 
        }
    }

    cout<<"The Largest String is : "<<largest<<endl<<"Length is : "<<max_len;

    return 0;

}