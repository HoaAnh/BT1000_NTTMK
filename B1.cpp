#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	cout<<"nhap vao so luong phan tu:";
    cin>>i;
	int array[i];
	for(n=0;n<i;n++)
	{
		cin>>array[n];
	}

	int Max=array[0];
	for(n=1;n<i;n++)
	{
		if(Max<array[n])
		{
			Max=array[n];
			//cout<<"Max: "<<Max<<endl;

		}
		//cout<<"Max: "<<Max<<endl;
	}
	cout<<"Max: "<<Max<<endl;
	
	int Min=array[0];
	for(n=1;n<i;n++)
	{
		if(Min>array[n])
		{
			Min=array[n];
		}
		
	}
	cout<<"Min: "<<Min<<endl;
	return 0;
	
}
