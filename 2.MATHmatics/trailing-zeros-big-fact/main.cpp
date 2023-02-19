#include<iostream>
using namespace std;

int main()
{
    int n=760;
    int res=0;
    
    for(int i=5;i<=n;i=i*5)
    {
        res=res+n/i;
    }
    cout<<res;
    
    return 0;
}