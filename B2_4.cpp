#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int n,m;
	int Arr[100][100];
	cin>>n;
	cin>>m;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>Arr[i][j];
		}
	}
	
	
	int q,r;
	cin>>q;
	cin>>r;
	int Brr[100][100];
	
	for(int i=0;i<q;i++)
	{
		for(int j=0;j<r;j++)
		{
			cin>>Brr[i][j];
		}
	}
	
	int Crr[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			Crr[i][j]=Arr[i][j]+Brr[i][j];
			cout<<Crr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
