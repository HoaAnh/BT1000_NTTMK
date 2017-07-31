#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int n;
    cin>>n;
    double KetQua = 0;
    
    
    for(int k = 1 ; k <= n ; k++)
    {
        long long TuSo=1;
        for(int i=1;i<=k;i++)
        {
            TuSo=TuSo*x;
        }
        
        long long MauSo = 0;
        for(int i=1;i<=k;i++)
        {
            MauSo=MauSo+i;
        }
        KetQua=KetQua+ (double)TuSo/MauSo;
    }
    cout << KetQua;
    return 0;
}
