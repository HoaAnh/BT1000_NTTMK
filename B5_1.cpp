#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	double x;
	cin>>a;
	cin>>b;
	
	if(a==0&&b!=0)
	{
		cout<<"Vo Nghiem";
	}
	if(a==0&&b==0)
	{
		cout<<"Vo so nghiem";
	}
	else
	{
		//x=double(-b)/double(a);
		//cout<< x;
		cout<<(double)-b/a;
	}
}
