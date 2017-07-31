#include <iostream>
using namespace std;

int main() {
    int a , b, c,temp;
    cin >> a >> b >> c;
    if(b<a)
    {
        temp = a ; a = b ; b = temp;   // a = min(a,b);
    }
    if(c<a)
    {
        temp = a ; a = c ; c = temp; // a = min(min(a,b),c)=  min (a,b,c);
    }
    if(c<b)
    {
        temp = b ; b = c ; c = temp; // b < c;
    }
    cout << a << " "<< b <<" "<<c; // a < b < c
    return 0;
}
