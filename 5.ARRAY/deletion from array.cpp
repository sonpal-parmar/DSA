#include<iostream>
using namespace std;

int main()
{
	int arr[]={3,8,12,5,6};
	int x=12;
	int pos;
	for(int i=0;i<5;i++)
	   if(arr[i]==x)
	    {
	    	pos=i;
	      break;	
         }
	
	for(int j=pos;j<4;j++)
	{
	   arr[j]=arr[j+1];	
	}
		
    for(int k=0; k<4;k++)
    {
    	cout<<arr[k]<<endl;
	}
  
   return 0;
	
}
