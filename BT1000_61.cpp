#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> Arr;
	
	while(n>0)
	{
		int a=n%10;
		Arr.push_back(a);
		n=n/10;
	}
	
	for(int i=1;i<Arr.size();i++)
	{
		if(Arr[i]<Arr[i-1])
		{
		cout<<"No";
		return 0;
		}
	}
	cout<<"Yes";
}
