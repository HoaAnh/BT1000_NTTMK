#include<iostream>
using namespace std;

double Cau1(int x)
{
    double ketqua = 0;
    
    /*
    for(int i = 1 ; i <= x;i++)
    {
        ketqua = ketqua + i;
    }
    */
    ketqua = (double)x*(x+1)/2;
    return ketqua;
}


int main()
{
    int n;
    cin>>n;
    double Sum=0;
    //double temp_sum = 0;
    for(double i=1;i<=n;i++)
    {
        //temp_sum = temp_sum + i;
        //sum=sum+1/temp_sum;
        
        Sum = Sum + 1/Cau1(i);
    }
    cout<<Sum;
    return 0;
}
