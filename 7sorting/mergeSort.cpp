#include<iostream>
using namespace std;

void merge(int a[],int l,int m, int r)
{
   int n1=m-l+1;
   int n2=r-m;
   int L[n1],R[n2];

   for(int i=0;i<n1;i++)
       L[i]=a[l+i];
   for(int i=0;i<n2;i++)
       R[i]=a[m+1+i];

   int i=0;
   int j=0;
   int k=l;

   while(i<n1 && j<n2)
   {
    if(L[i]<= R[j])
    {
        a[k]=L[i];
        i++;
    }
    else
    {
        a[k]=R[j];
        j++;
    }
    k++;
   }

   while(i<n1)
   {
    a[k]=L[i];
    i++;
    k++;
   }

   while(j<n2)
   {
    a[k]=R[j];
    j++;
    k++;
   }
}

void mergeSort(int a[],int l, int r)
{
    if(l<r){
      int m;
      m=(l+r)/2;

      mergeSort(a,l,m);
      mergeSort(a,m+1,r);
    
      merge(a,l,m,r);
    }
}

void print(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={20,40,10,50,15};
    int n=size(arr);
    print(arr,n);
    mergeSort(arr,0,n-1);
    print(arr,n);
}