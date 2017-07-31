#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int Max1=0;
	int Max2=0;
	vector<int> Arr1;
	vector<int> Arr2;
	for( int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			
			if(i%2==0)
			{
				
				if(Max1<i)
				{
					Max1=i;
				}
			
				
			}
			
			else
			{
				if(Max2<i)
				{
					Max2=i;
				}
				
			}
			
		}
	
	}
	
	cout<<Max1<<endl;
	cout<<Max2;
	
	return 0;
}
