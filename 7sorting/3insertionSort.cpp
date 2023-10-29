#include<iostream>
using namespace std;
//insertion sort
int main()
{
    int a[] = {78,56,75,25,11,52,45,3,8,1,98,95,85};
    int len = size(a);
    
    for(int i = 1; i < len-1; i++)
    {
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j] > key)
        {
            
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    

    for(int i = 0; i< len-1; i++)
    {
        cout<<a[i]<<" ";
    }
}
