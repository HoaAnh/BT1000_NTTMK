#include<iostream>
using namespace std;
int main()
{
	int n;
	int A[n++];
	cin>>n;
	int sum(5);
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	for(int i=1;i<=n;i++)
	{
		sum=sum+A[i];
		
	}
	cout<<sum<<endl;
}
