#include <iostream>
#include <vector>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    vector<int> a;
    int sum=1;
    
    int ChuSo;
    while(n>0)
    {
        ChuSo = n%10;   
        a.push_back(ChuSo);
        n = n/10;
    }
    cout<<a.back();
    return 0;
}
