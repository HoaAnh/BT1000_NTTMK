#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int tich=1;
	int a=0;
	for( int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			
			a++;
			
		}
	
	}
	cout<<a;
	return 0;
}
