#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int Arr[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>Arr[i][j];
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<Arr[i][j]<<" ";
		}
		cout<<endl;	
	}
	
	
}
