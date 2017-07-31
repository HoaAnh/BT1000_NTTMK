#include<iostream>
using namespace std;
int main()
{
	int n;
	int Arr[1002];
	int x;
	int i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>Arr[i];
	}
	cin>>x;
	int kt=0;
	for(i=1;i<=n;i++)
	{
		if(Arr[i]==x)
		{
			cout<<"Yes";
			kt=1;
			break;
		}
	
	}
	if(kt==0) {
	cout<<"No";}
	
}
