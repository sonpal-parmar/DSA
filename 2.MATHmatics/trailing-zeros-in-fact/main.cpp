#include<iostream>
using namespace std;

int main()
{
  long long fact=1;
	int n=20;
	
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact<<endl;
	
    int res=0;
    
    
    while(fact%10==0)
    {
        res=res+1;
        fact=fact/10;
    }
	
	cout<<res;
	
	
	return 0;
}