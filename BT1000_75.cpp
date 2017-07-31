#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int k=log(n)/log(2);
	
	if(pow(2,k)==n)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
