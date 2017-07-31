#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=0;
    vector<int>Arr;
    
    while(n>0)
    {
        a=n%10;
        Arr.push_back(a);
        n=n/10;
    }
    
    int na=Arr.size();
    
    for(int i=0;i<Arr.size()/2;i++)
    {
        if(Arr[i]!=Arr[na-1-i])
        {
           // cout<<"Nhay vo day roi "<<endl;
           cout<<"No";
            return 0;
            
        }
        
        
    }
    cout<<"Yes"; 
    
    return 0;
}
