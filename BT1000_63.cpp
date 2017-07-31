#include <iostream>
#include<cmath>
using namespace std;

int main() {
    
    double a;
    double b;
    double c;
  
    cin>>a;
    cin>>b;
    cin>>c;
    
    double delta;

    
    if(a==0)
    {        
        if(b==0)
        {
            if(c==0)
            {
                cout<<"VSN";
            }
            else
            {
                cout<<"VN";
            }
        }
        else
        {
            cout<<"1 nghiem"<<-c/a;
        }
    }
    else
    {
        delta=b*b-4*a*c;
        
        if(delta==0)
        {
            cout<<"Nghiem kep"<<-b/(2*a);
        }
        else if(delta>0)
        { 
            cout<<"2 nghiem phan biet: "<<(-b+sqrt(delta))/(2*a)<<" va "<<(-b-sqrt(delta))/(2*a);
        }
        else
        {   cout<<"Vo nghiem";
        
        }
    }
    return 0;
}
