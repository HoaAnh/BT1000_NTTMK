#include<iostream>
#include<vector>
using namespace std;
int main()
{	while(1)
	{
	
		int n;
		cin>>n;
		int sum=0;
	
		for( int i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
			
		}
		
		if(sum==n)
		{
			cout<<"So hoan thien"<<endl;
		}
		else
		{
			cout<<"Khong phai so hoan thien"<<endl;
		}
	
	}
	
	return 0;
}
