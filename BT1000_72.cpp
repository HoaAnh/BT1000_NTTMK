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
    for(int i=1;i<=n;i++)
    {
        double Mau=1;
        for(int k=1;k<=i;k++)
        {
            Mau=Mau*k;
            
        }
        
        S=S+(pow(-1,i)*(double)pow(x,i)/Mau);
    }
    cout<<S;
    
    return 0;
}
