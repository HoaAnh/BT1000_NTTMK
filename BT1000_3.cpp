#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=0;
    for(int i=1;i<=n;i++)
    {
        //sum=sum + (double)1/(i);
        //sum=sum + 1/((double)i);
        //sum=sum + double(1)/(i);
        //sum=sum + 1/(double(i));
        //sum=sum + 1.0/(i);
        //sum=sum + 1/(i*1.0);
        sum=sum + double(1)/(i);
    }
    cout<<sum;
    return 0;
}
