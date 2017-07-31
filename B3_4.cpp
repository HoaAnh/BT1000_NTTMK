#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> Chan;
	vector<int> Le;
	int m,n;
	cin>>n;
	cin>>m;
	int Arr[100][100];
	int Brr[100][100];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>Arr[i][j];
			//cout<<Arr[i][j]<<" ";
		}
		//cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(Arr[i][j]%2==0)
			{
				Chan.push_back(Arr[i][j]);
			}
			else
			{	
				Le.push_back(Arr[i][j]);
			}
		}
	}
	
	for(int i=0; i<Chan.size();i++)
	{
	cout<<Chan[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<Le.size();i++)
	{
	cout<<Le[i]<<" ";
	}
	
}
