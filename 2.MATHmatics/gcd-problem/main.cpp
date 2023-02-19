#include<iostream>
using namespace std;

int main()
{
    int a=13, b=39;
    int res=min(a,b);
    while(res>0)
    {
    if(a%res==0&&b%res==0)
    {
     break;
    }
    res--;
    }
    cout<<res;
    
    return 0;
    
}