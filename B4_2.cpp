#include<iostream>
using namespace std;
int main()
{
	for(int n=1;n<1000;n++)
	{
	
		 int a,b,c;
		 cin>>a;
		 cin>>b;
		 cin>>c;
		 if(a+b>c && b+c>a && c+a>b)
		 {
			cout<<"Yes"<<endl;
		 }
		 else
		 {
			cout<<"No"<<endl;
		 }
    }
}
