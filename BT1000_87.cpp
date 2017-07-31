#include<iostream>
using namespace std;
int main()
{
	
	int sum=0;
	int n=0;
	int Min=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
		if(sum>10000)
		{		
		
			if(Min<n)
			{
				Min=n;
					
			}
			
		}
		
	}
	cout<<n;
	
	
	return 0;
}


//
  int sum=0;
    int i=1;
    
    for( i=1; ;i++)
    {
        sum=sum+i;
        if(sum>10000)
        {
            break;
        }
    }
    cout<<i;
