#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int na,nb;
	cin>>na>>nb;
	int k,m;
	cin>>k>>m;
	
	int Arr[100];
	int Brr[100];
	
	
	int i=0;
	int j=0;
	
	for(i=0;i<na;i++)
	{
		cin>>Arr[i];
	}
	for(j=0;j<nb;j++)
	{
		cin>>Brr[j];
	}
	
	if(Arr[k-1]<Brr[nb-m+1])
	{
		cout<<"YES";
	}
	else	cout<<"NO";
	return 0;
}
	

