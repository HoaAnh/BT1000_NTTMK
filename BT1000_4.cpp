#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double sum=0;
	for(double i=1;i<=n;i++)
	{
		sum=sum+1/(2*i);
	}
	cout<<sum;
	return 0;
}
