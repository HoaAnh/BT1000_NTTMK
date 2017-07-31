#include <iostream>
using namespace std;
float a[100];



int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    float min; 
    int index_min;
    min = a[0];
    index_min = 0;
    for(int i = 1 ; i < n ;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            index_min = i;
        }
    }
    
    cout << index_min;
    
    return 0;
}
