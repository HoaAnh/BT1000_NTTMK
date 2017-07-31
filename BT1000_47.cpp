#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    
    int sum=0;
    
    for( ;n>0;n = n/10)
    {
        
        int ChuSo = n%10;
        
        if(ChuSo%2==0)
        {
            sum=sum+ChuSo;
        }
    }
    
    /*
    while(n>0)
    {
        int ChuSo = n%10;
        
        
        if(ChuSo%2==0)
        {
            sum=sum+ChuSo;
        }
            
        n = n/10;
    }
    */
    cout<<sum;
    return 0;
}
