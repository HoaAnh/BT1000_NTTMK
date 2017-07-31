#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    
    int sum=0;
    
    while(n>0)
    {
        sum=sum+(n%10);
        n = n/10;
    }
    cout<<sum;
    return 0;
}
