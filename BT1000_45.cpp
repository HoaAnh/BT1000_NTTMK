#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    
    int dem=0;
    
    
    for( ;n>0;n=n/10)
    {
        int ChuSo = n%10;
        
        
        if(ChuSo%2==1)
        {
            dem++;
        }  
    }
    
    /*
    while(n>0)
    {
        int ChuSo = n%10;
        
        
        if(ChuSo%2==1)
        {
            dem++;
        }
            
        n = n/10;
    }
    */
    cout<<dem;
    return 0;
}
