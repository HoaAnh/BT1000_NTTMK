#include<iostream>
using namespace std;
int main()
{
	int n;
	int Arr[1001];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>Arr[i];
	}
	int l;
	int r;
	cin>>l;
	cin>>r;
	for(int i=l;i<=r;i++)
	{
		cout<<Arr[i]<<" ";
		
	}
	int Max=Arr[l];
	
	for(int i=l+1; i<=r;i++)
	{
		if(Max<Arr[i])
		{
			Max=Arr[i];
			
		}
		
	}
	cout<<endl<<Max;
}
