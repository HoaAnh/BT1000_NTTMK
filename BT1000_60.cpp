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
    // 5 4 3 2 1 
    /*  so sánh i v?i ph?n t? bên trái i
    for(int i=1;i<Arr.size();i++)
    {
       if(Arr[i]>Arr[i-1])
       {
           cout<<"No";
           return 0;
       }
        
        
    }
    */
    // so sánh i v?i ph?n t? bên ph?i i
    for(int i=0;i<Arr.size()-1;i++)
    {
       if(Arr[i]<Arr[i+1])
       {
           cout<<"No";
           return 0;
       }
        
        
    }
    cout<<"Yes"; 
    
    return 0;
}
