#include <iostream>
#include<cmath>
#include <vector>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    vector<int> a;
    
    
    int ChuSo;
    while(n>0)
    {
        ChuSo = n%10;   
        a.push_back(ChuSo);
        n = n/10;
    }
    
    unsigned long long kq=0;
    int na=a.size();
    int mu=na-1;
    
    for(int i=0;i<na;i++)
    {
        int temp=a[i]*pow(10,mu);
        
        mu--;
        kq=kq+temp;        
    }
    cout<<kq;
    
    return 0;
}
