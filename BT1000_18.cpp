#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int n;
    cin>>n;
    double KetQua = 0;
    
    
    for(int k = 0 ; k <= n ; k++)
    {
        long long TuSo;
        TuSo = 1;
        for(int i=1;i<=2*k;i++)
        {
            TuSo=TuSo*x;
        }

        
        long long MauSo;
        MauSo = 1;
        for(int i=1;i<=2*k;i++)
        {
            MauSo=MauSo*i;
        }
        
        KetQua=KetQua+ (double)TuSo/MauSo;
    }
    cout << KetQua;
    return 0;
}
