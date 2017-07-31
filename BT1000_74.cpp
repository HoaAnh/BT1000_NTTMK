#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    double S=1;
    for(int i=1;i<=n;i++)
    {
        double Mau=1;
        for(int k=1;k<=(2*i+1);k++)
        {
            Mau=Mau*k;
        }
        S=S+(pow(-1,i+1)*(double)pow(x,2*i+1)/Mau);
    }
    cout<<S;
    return 0;
}
