#include<iostream>
using namespace std;

int fr(int a[],int n, int item)
{
    int c=0, i;
    i=0;
    while(i<n)
    {
        if(a[i]==item)
             c++;
        i++;
    }
    return(c);

}

int main()
{
   int a[100],n,i,item;
   int res;
   do{
    cout<<"how many values :(1-100)\n";
    cin>>n;
   }
   while(n<=0||n>=100);
   cout<<"enter values\n";
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   cout<<"item to ";
   cin>>item;
   res=fr(a,n,item);
   cout<<res;
   return 0;
}