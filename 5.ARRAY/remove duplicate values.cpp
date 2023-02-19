#include<iostream>
using namespace std;

int main()
{
	int n=5;
	int arr[]={10,20,20,30,30,30};
	int temp[5];
	temp[0]=arr[0];
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(temp[res-1]!=arr[i])
		{
			temp[res]=arr[i];
			res++;
		}
		
	}
	for(int i=0;i<res;i++)
	{
		arr[i]=temp[i];
		cout<<arr[i];
	}
	
	return 0;

}


