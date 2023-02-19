#include<iostream>
using namespace std;

int main()
{
   int arr[]={5,29,21,48,35,2,10};
  
   int res=0;
   
   for(int i=0; i<7;i++)
   {
   	if(arr[i]>arr[res])
   	 {
   	   res=i;
   }
   }
   
   cout<<arr[res]<<"\n"<<res;
   
   return 0;
   
}
