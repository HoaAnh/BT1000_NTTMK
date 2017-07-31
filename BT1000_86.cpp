#include<iostream>
#include<cmath>
using namespace std;

int Sum(int n);

int main()
{
	int n;
	cin>>n;
	
	
	cout<<Sum(n);
	
	return 0;
}

int Sum(int n)

{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+pow(n,3);
	}
	
	return sum;
}

