#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long n;
	cin>>n;
	int a=0;
	int Max=0;
	vector<int> Arr;
	int b=0;
	
	while(n>0)
	{
		a=n%10;
		n=n/10;
		Arr.push_back(a);
		
		
		if(Max<a)
		{
			Max=a;
			
			
		}	
		
	}
	
	for(int i=0;i<=Arr.size();i++)
	{
		if(Max==Arr[i])
		{
			b++;
		}
		
	}
	
	
	cout<<b;

	
	
	return 0;
}
