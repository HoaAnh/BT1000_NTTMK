#include <iostream>
using namespace std;

int Ngay[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool KT(int x)
{
    if((x%4==0 && x%100!=0) || x%400 == 0)
        return true;
    return false;
}
int main()
{
    int thang, nam;
    cin >> thang >> nam ;
    if(KT(nam)==true)
        Ngay[2] = 29;
    cout <<"Thang "<< thang<<" Nam " << nam << " Co "<<Ngay[thang]<< " Ngay "<<endl;

    return 0;
}



/*#include<iostream>

using namespace std;

bool Kiemtranamnhuan(int a, int b);
int Kiemtrathang(int a, int b);

int main()
{
    int a,b;
    cin>>a>>b;
    Kiemtrathang(a,b);
    return 0;
}

    bool Kiemtranamnhuan(int a, int b)
    {
        if((b%4==0&&b%100!=0)||(b%400==0))
        {
            return true;
            
        }
        return false;
    }
    
    int Kiemtrathang(int a, int b)
    {
        if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
        {
            cout<<"31";
        }
        
        else if(a==4||a==6||a==9||a==11)
        {
            cout<<"30";
        }
        
        else if(a==2&& Kiemtranamnhuan(a,b)==true)
        {
            cout<<"29";
        }
        
        else if(a==2&& Kiemtranamnhuan(a,b)==false)
        {
            cout<<"28";
        }
        else
        {
            cout<<"Nhap sai!!";
        }
        
        return 0;
    }
    
    */
