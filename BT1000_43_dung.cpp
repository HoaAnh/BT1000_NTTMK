#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    int i=1;
    while(n>0)
    {
        n=n/10;
        if(n>0)
        {
            i++;
        }
    }
    cout<<i;
    return 0;
}
