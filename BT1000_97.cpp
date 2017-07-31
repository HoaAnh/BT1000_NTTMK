#include <iostream>
#include <cmath>
using namespace std;
void XuatDangTamGiac(double a , double b , double c);
bool KtraTamGiac(double a ,double b, double c);
bool KtraTamGiacDeu(double a , double b , double c);
bool KtraTamGiacCan(double a , double b , double c);
bool KtraTamGiacVuong(double a , double b , double c);
bool KtraTamGiacVuongCan(double a , double b , double c);


bool KtraTamGiac(double a ,double b, double c)
{
    if((a+b>c)&&(a+c>b)&&(b+c>a))
        return true;
    return false;
}

bool KtraTamGiacDeu(double a , double b , double c)
{
    if(a==b && b == c)
        return true;
    return false;
}
bool KtraTamGiacCan(double a , double b , double c)
{
    if(a==b || b == c || c == a)
         return true;
    return false;
}
bool KtraTamGiacVuong(double a , double b , double c)
{
    double epsilon = 0.00000000001;
    /// [c^2 -epsilon ; c^2+epsilon]; c^2
    if( ( (a*a + b*b) >= (c*c - epsilon) && (a*a + b*b) <= (c*c + epsilon) )||
        ( (c*c + b*b) >= (a*a - epsilon) && (c*c + b*b) <= (a*a + epsilon) )||
        ( (a*a + c*c) >= (b*b - epsilon) && (a*a + c*c) <= (b*b + epsilon) ) )
        return true;
    return false;
}
bool KtraTamGiacVuongCan(double a , double b , double c)
{
    if(KtraTamGiacVuong(a,b,c)==true && KtraTamGiacCan(a,b,c)==true )
        return true;
    return false;
}

void XuatDangTamGiac(double a , double b , double c)
{
    if(KtraTamGiac(a,b,c)==false)
    {
        cout <<"Khong phai tam giac "<<endl;
    }
    else
    {
        if(KtraTamGiacVuongCan(a,b,c))
            cout<<"Vuong can"<<endl;
        else if(KtraTamGiacDeu(a,b,c))
            cout<<"Deu";
        else if(KtraTamGiacVuong(a,b,c))
            cout<<"Vuong";
        else if(KtraTamGiacCan(a,b,c))
            cout<<"Can";
        else
            cout<<"Tam giac thuong"<<endl;
    }
}

int main()
{
    
    double a,b,c;
    cin >> a >> b >> c;
    XuatDangTamGiac(a,b,c);
    return 0;
}
