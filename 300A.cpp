#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int Arr[100];
	int i=1;
	int dem1=0;
	int dem2=0;
	int dem3=0;
	
	for(i=1;i<=n;i++)
	{
		cin>>Arr[i];
	}
	
	for(i=1;i<=n;i++)
	{
		while(Arr[i]<0)
		{
			dem1++;		
			
		}
		
	}
	cout<<dem1<<" "<<Arr[i]<<endl;
		
	for(i=1;i<=n;i++)
	{	
		while(Arr[i]>0)
		{
			dem2++;
			
		}
		
	}	
	cout<<dem2<<" "<<Arr[i]<<endl;
	
	for(i=1;i<=n;i++)
	{	
		while(Arr[i]==0)
		{
			dem3++;
			
		}
		
	}
	cout<<dem3<<" "<<Arr[i]<<endl;
	
	return 0;
}
