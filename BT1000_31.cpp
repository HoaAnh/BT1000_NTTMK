#include<iostream>
#include<vector>
using namespace std;


int main()
{
	while(1)
{

	int n;
	cin>>n;
	int sum=0;
	int a=0;

	for( int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			a++;
		}
	
    }
    
    if(a==2)
    {
    	cout<<"So nguyen to"<<endl;
	}
	else
	{
		cout<<"Khong phai so nguyen to"<<endl;
	}
}
	return 0;
}
