#include<iostream>
using namespace std;

int main()
{
	int arr[]={10,20,20,30,30,30};
	int n=5,res=1;
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[res-1])
	    {
	    	arr[res]=arr[i];
	    	res++; 
	    	cout<<arr[res];
		}
	}
	return 0;
}
