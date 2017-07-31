#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int Arr[100001];
	for(int i=1;i<=n;i++)
	{
		cin>>Arr[i];
		

	}
	int b=0;
	for(int i=1;i<=n;i++)
	{
		if(Arr[i]%3==0 && Arr[i]%2!=0)
		{
			b++;
		}
	}
	cout<<b;
	
}
