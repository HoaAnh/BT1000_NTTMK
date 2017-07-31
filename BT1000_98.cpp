#include <iostream>
using namespace std;

int main() {
    
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    double D,Dx,Dy;
    
    D=a*e-d*b;
    Dx=-b*f+c*e;
    Dy=a*f-d*c;
    
    if(D!=0)
    {
        cout<<"Phuong trinh co nghiem x:"<<Dx/D<<" y:"<<Dy/D;
    }
    
    else // d==0
    {
        
            if(Dx==Dy&&Dy==0)
            {
                cout<<"Phuong trinh vo so nghiem";
            }
            else
            {
                cout<<"Phuong trinh vo nghiem";

            }
    }
    return 0;
}



/*#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	double a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	
	double x,y;
	
	if((a==b&&b==0)||(d==e&&e==0)||(a==d&&d==0)||(b==e&&e==0))
	{
		cout<<"PTVN";
	}
	
	else
	{
		x=(c*e-f*b)/(a*e-b*d);
		
		if(b==0)
		{
			y=(f-d*x)/e;
			
		}
		
		else
		{
			y=(c-a*x)/b;
		}
		
	}
	
	cout<<"x: "<<x<<" "<<"y: "<<y;
	return 0;
	
} */
