#include<iostream>
using namespace std;
int main()
{
	int n;
	int array[n+1];
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		//cout<<"So thu "<<i<<" : "<<endl;
		cin>>array[i];
	}
	for(int i=n;i>=1;i--)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
	
