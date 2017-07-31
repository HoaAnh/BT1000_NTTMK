#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    
    int sum=1;
    
    int ChuSo;
    while(n>0)
    {
        ChuSo = n%10;    
        n = n/10;
    }

    cout<<ChuSo;
    return 0;
}
