#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int m;
	cin>>m;
	
	int Arr[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>Arr[i][j];
		}
	}
	
	int x;
	cin>>x;

	int Min=0;
	if(m>n)
	{
		Min=n;
	}
	
	else
	{
		Min=m;
	}
	
	int sum=0;
	for(int i=0;i<Min;i++)
	{
		for(int j=0;j<Min;j++)
		{
			if(i==j)
			{
				sum+=Arr[i][j];
			}
		}
	}
	cout<<sum;
	return 0;
}


