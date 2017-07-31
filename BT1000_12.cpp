#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int n;
    cin >> n;
    
    long long Tich=1;
    long long Sum=0;
    for(int i=1;i<=n;i++)
    {
        Tich=Tich*x;
        Sum=Sum+Tich;
    }
    cout<<Sum;
    return 0;
}
