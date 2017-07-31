#include <iostream>
using namespace std;


int Quy(int n); // Nguyên m?u hàm , Function Prototype

int Quy(int n)
{
    if(n>=1&&n<=3)
    {
        return 1;
    }
    else if(n>=4&&n<=6)
    {
        return 2;
    }
    else if(n>=7&&n<=9)
    {
        return 3;
    }
    else
    {
       return 4;
    }
}

int Quy_(int n)
{
    // 5 
    // result = 1;
    // result ++;
    int result = n/3;
    if(n%3>0)
    {
        result++;
    }
    return result;
}

int main()
{
    
    int n;
    cin>>n;
    cout <<"Quy "<<Quy(n);
    return 0;
}
