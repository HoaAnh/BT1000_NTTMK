#include<iostream>
using namespace std;
int main()
{
	int s;
	cin>>s;
	int sum=0;
	int n=0;
	int Min=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+1/i;
		if(sum>s)
		{		
		
			if(Min<n)
			{
				Min=n;
					
			}
			
		}
		
	}
	cout<<n;
	
	
	return 0;
}
