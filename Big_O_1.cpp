#include<iostream>
#include<vector>
using namespace std;
int main()
{  
	int n;
	cin>>n;
	vector<int> Arr;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		Arr.push_back(a);
	}
	vector<int>::iterator it;
	vector<int> b;
	for( it=Arr.begin(); it!=Arr.end();it++)
	{
		
		if(*it>0)
		{
			b.push_back(*it);
		}
		
	}
	
		for( it=b.begin(); it!=b.end();it++)
	{
		
		cout<<*it<<" ";
		
	}

/*	
	for(int i=0; i<Arr.size() ;i++)
	{
		cout<<Arr[i]<<" ";
	}
	*/
	
}
	
	
	/* vector<int> Arr;
	int n;
	cin>>n;
	int a;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		Arr.push_back(a);
	}
	
	vector<int>::iterator it;
	it = Arr.begin() +4;
	Arr.erase(it);
	for(int i=0;i<Arr.size() ;i++)
	{
		cout<<Arr[i]<<" ";
	}
	*/
	
	
/*	int n;
	cin>>n;
	int Arr[1000];
	vector<int>::iterator it;
	for( int i=1;i<=n;i++)
	{
		cin>>Arr[i];
		
	}
	for( int i=1;i<=n;i++)
	{
		if(Arr[i]<0)
		{
			vector<int> Arr[i];
			it = Arr[i].begin()+ 0;
			Arr[i].erase(it);
		}
	}
	cout<<Arr[i];
	*/

