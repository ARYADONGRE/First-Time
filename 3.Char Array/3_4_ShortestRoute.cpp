#include<iostream>
using namespace std;

int main()
{
    char dir[1000];
    cin.getline(dir,1000);
    int y=0,x=0;
    for(int i=0;dir[i]!='\0';i++)
    {
        switch(dir[i])
        {
            case 'N' : y++;
                    break;
            case 'S' : y--;
                    break;
            case 'E' : x++;
                    break;
            case 'W': x--;
                    break; 
        
        }
    }
    cout<<" (x,y) = ("<<x<<" , "<<y<<" )"<<endl; 

    while(x>0)
    {
      cout<<"E";
      x--;
    }
    while(x<0)
    {
        cout<<"W";
        x++;
    }
    while(y>0)
    {
        cout<<"N";
        y--;
    }
    while(y<0)
    {
        cout<<"S";
        y++;
    }

return 0;
}