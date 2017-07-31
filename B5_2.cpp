#include<iostream>
using namespace std;
double Arr[1000001];
int main()
{
	int n;
	cin>>n;
	double a=0,b=0,c=0;

    for(int i=1;i<=n;i++)
    {
    	cin>>Arr[i];
    	if( Arr[i]>=1)
    	{
    		a++; 		    		
		}
		else if(Arr[i]<0) b++;
		else c++;
		
	}
	cout<<(double)a/n;
	cout<<endl;
	cout<<(double)b/n;
	cout<<endl;
	cout <<(double)c/n;
}
