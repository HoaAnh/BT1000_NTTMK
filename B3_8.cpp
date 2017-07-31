#include<iostream>
using namespace std;

int Giaithua(int n)
{
	int Tich=1;
	for(int i=1;i<=n;i++)
	{
		Tich=Tich*i;
	}
	cout<<Tich;
}

int main()
{
	int n;
	cin>>n;
	
	Giaithua(n);
}
