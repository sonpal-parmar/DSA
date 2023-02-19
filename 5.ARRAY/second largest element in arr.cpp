#include<iostream>
using namespace std;

int main()
{
	int arr[]={5,15,12,56,23,56,23,46};
	int res=0;
	
	for(int i=0;i<8;i++)
	{
		if(arr[i]>arr[res])
		   res=i;
	}
}
