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
    
    int ans = 0;
    for(int i = 1 ; i <= thang - 1  ;i++)
    {
        ans+=NgayTrongThang[i];
    }
    ans+=ngay;
    cout << ans;
    
    return 0;
}
// 1 1 2015  -> 1
// 1 2 2015 -> 32
// 11 5 2015 -> 42
