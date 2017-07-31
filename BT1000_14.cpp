#include <iostream>
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


        Tich=Tich*x*x;
        Sum=Sum+Tich;

    }
    Sum = Sum + 1;
    Sum = Sum * x;

    cout<<Sum;
    return 0;
}

