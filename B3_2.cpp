#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	//cin>>s;
	getline(cin,s);
	int c(0);
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a')
		{
			c++;
		}
	}
	cout<<c;
}
