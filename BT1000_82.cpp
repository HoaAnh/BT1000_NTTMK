#include <iostream>
using namespace std;


double Solonnhat(double,double); // Nguyên m?u hàm , Function Prototype

int main()
{
    //3 9 5
    double a;
    double b;
    double c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    
    //double m = Solonnhat(a,b); // 9
    //double e = Solonnhat(m,c); // 9 và 5
    
    
    double e  = Solonnhat(Solonnhat(a,b),c);
    cout<<e;
        
    return 0;
}

double Solonnhat(double a, double b)
{
    double Max;
    if(a>b)
    {
        Max=a;
    }
    else
    {
        Max=b;
    }

    return Max;
}
