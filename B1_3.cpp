#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a;
	cin>>a;
	double b;
	cin>>b;
	double c;
	cin>>c;
	
	int cv=a+b+c;
	cout<<"Chu vi:"<<cv<<endl;
	
	double p= cv/2;
	
	int S=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Di?n tích:"<<S<<endl;
	
	return 0;
	
}
