#include<iostream>
using namespace std;

int main()
{
    int a=12, b=18;
   int res=max(a,b);
    while(res!=a*b)
    {
        if(res%a==0&&res%b==0)
        {
            cout<<res;
            break;
        }
        
      res++;  
    }
    
    return 0;
    
}