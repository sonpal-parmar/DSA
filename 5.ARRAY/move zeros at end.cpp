#include<iostream>
using namespace std;

int moveZeros(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			arr[i]=arr[i+1];
			count++;
		}
	}
	
	for(int i=n-count;i<n;i++)
	{
		arr[i]=0;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	return 0;
}

int main()
{
	int a[]={10,0,3,3,2,0,30,40,0};
	moveZeros(a,9);
	return 0;
}
