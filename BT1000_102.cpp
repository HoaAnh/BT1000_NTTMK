#include <iostream>
using namespace std;



int NgayTrongThang[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool KT(int x)
{
    if((x%4==0 && x%100!=0) || x%400 == 0)
        return true;
    return false;
}
int main()
{
    int ngay , thang, nam;
    //int n_ngay , n_thang  , n_nam;
    cin >>ngay >> thang >> nam ;
    
    
    if(KT(nam)==true)
        NgayTrongThang[2] = 29;
    
    if(ngay < NgayTrongThang[thang] )
    {
        ngay++;
    }
    else if(ngay == NgayTrongThang[thang] )
    {
        ngay = 1;
        thang++;
        if(thang > 12)
        {
            thang = 1;
            nam ++;
        }
        
    }
    else
    {
        cout<<"Nhap sai"<<endl;
    }
    cout << ngay <<"/"<<thang<<"/"<<nam;

    return 0;
}


// 30 / 1 / 2017  ->  31 / 1 / 2017
// 31 / 1 / 2017 -> 1 / 2 / 2017 
// 31/12/2017 -> 1/1/2018

