#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    bool check; // n?u check = true thì là s? chính phuong
    check = false;
    
    for( int i=1;i<=n;i++)
    {
        if(n%i==0 && i*i == n)
        {
            check = true;
            break;
        }
    }
    
    if(check==true)
    {
        cout<<"Yes";
        
    }
    else
    {
        cout<<"No";
    }
    

    return 0;
}
