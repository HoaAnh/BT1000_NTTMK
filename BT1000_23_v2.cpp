#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    double canbac2 = pow(n,0.5);
    int phannguyen = (int)canbac2;

    if(phannguyen*phannguyen==n)
    {
        cout<<"Yes";
        
    }
    else
    {
        cout<<"No";
    }

    return 0;
}
