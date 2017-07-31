#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int Arr[100];
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>Arr[i];
		
	}
	
	for(int i=1;i<n;i++)
	{
		for( int j=i+1;j<=n;j++)
		{
			if(Arr[j]<Arr[i])
			{
				int temp=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=temp;
				
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<Arr[i]<<" ";
	}
	
	
	
	return 0;
}
