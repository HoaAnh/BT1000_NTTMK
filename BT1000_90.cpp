#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int sum=0;
    int i;
    
    for(i=1; ;i++)
    {
        /*
        sum=sum+i;
        if(sum>=n)
        {
            break;
        }
        */
        if(sum<n)
        {
            sum+=i;
        }
        else
            break;
        
        
    }
    
    cout<<i-2;
    
    
    return 0;
}
