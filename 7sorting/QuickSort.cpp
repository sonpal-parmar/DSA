#include<iostream>
using namespace std;

int partition(int a[],int start,int end)
{
    int pivot=a[end];
    int i = start-1;

    for(int j=start;j<=end-1;j++)
    {
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[end]);
    return (i+1);
}

void  quickSort(int a[],int start,int end)
{
    if(start<end)
    {
        int p = partition(a,start,end);
        quickSort(a,start,p-1);
        quickSort(a,p+1,end);
    }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[]={20,40,10,50,15};
    int n=size(a);
    print(a,n);
    quickSort(a,0,n-1);
    print(a,n);
}