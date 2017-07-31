
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double sum=0;
	for(double i=1;i<=n;i++)
	{
		sum=sum+i/(i+1);
	}
	cout<<sum;
	return 0;
} 
