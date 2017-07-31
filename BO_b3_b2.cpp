#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    
    int c = 0;
    
    /*
    while(true)
    {
        c++;
    }
    */
    
    
    for(c = 1;;c++)
    {
        a=a*3;
        b=b*2;
    
        if(a>b)
        {
            break;
        }
    
    }
    cout<<c;
    

    return 0;
}
