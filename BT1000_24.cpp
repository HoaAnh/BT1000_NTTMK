#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	vector<int> Arr1;
	vector<int> Arr2;
	for( int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			
			if(i%2==0)
			{
				
				Arr1.push_back(i);
			
				
			}
			
			else
			{
				Arr2.push_back(i);
				
			}
			
		}
	
	}
	
	for( int i=0;i<Arr1.size();i++)
	{
		cout<<Arr1[i]<<" ";
		
	}
	cout<<endl;
	for( int i=0;i<Arr2.size();i++)
	{
		cout<<Arr2[i]<<" ";
	}
	
	
	return 0;
}
