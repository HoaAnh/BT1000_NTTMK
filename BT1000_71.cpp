#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x;
	cin>>x;
	
	int S=0;
	for(int i=1;i<=n;i++)
	{
		S=S+(pow(-1,n)*pow(x,n)/n);
	}
	return 0;
}
