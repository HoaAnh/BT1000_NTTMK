#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    //cout << "n = "<<n;
    //cout << " m = "<< m;
    
    
    vector<int> Arr[100];
    
    ///
    //vector< vector<int> > Arr;
    ///Arr.resize(n);
    ///
    int a;
    
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>a;
            Arr[i].push_back(a);
            
        }
    }
    
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cout<<Arr[i][j]<<" ";
            
        }
         cout<<endl;
    }
    
   
    
    
    int sum1=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                sum1=sum1+Arr[i][i];
            }
        }
    }
    cout<<sum1<<endl;
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+j==n-1)
            {
                sum=sum+Arr[i][i];
            }
        }
    }
    cout<<sum;
    
    return 0;
}
