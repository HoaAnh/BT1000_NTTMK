#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long Tich=1;
    long long Sum=0;
    for(int i=1;i<=n;i++)
    {
        Tich=Tich*i;
        Sum=Sum+Tich;
    }
    cout<<Sum;
    return 0;
}
