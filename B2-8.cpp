#include<iostream>
using namespace std;



int BCNN(int a, int b)
{
	int Min;
	int bcnn;
		
	if(a>b)
	{
		Min=b;
	}
	else
	{
		Min=a;
	}
	
	while(a%Min!=0 || b%Min!=0 )
	{
		Min--;
	}

	bcnn =(a*b)/Min;
	cout<<bcnn;
}


int main()
{
	int a;
	cin>>a;
	int b;
	cin>>b;

	
 	BCNN(a,b);
	
	
	
}

