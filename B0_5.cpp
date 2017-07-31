#include<iostream>
#include<vector>
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
	
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==j)
			{
				sum=sum+Arr[i][j];
				
			}
		}
	}
	cout<<sum;
	
}
