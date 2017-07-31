#include<iostream>
using namespace std;



int ucln(int a, int b)
{
	int Min;
		
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
	cout<<Min;
}


int main()
{
	int a;
	cin>>a;
	int b;
	cin>>b;

	
	ucln(a,b);
	
	
}






