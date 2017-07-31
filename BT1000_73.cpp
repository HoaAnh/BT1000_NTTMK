#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    double S=0;
    for(int i=0;i<=n;i++)
    {
        double Mau=1;
        for(int k=1;k<=2*i;k++)
        {
            Mau=Mau*k;
        }
        S=S+(pow(-1,i+1)*(double)pow(x,2*i)/Mau);
    }
    cout<<S;
    return 0;
}
