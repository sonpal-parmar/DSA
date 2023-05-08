#include<iostream>
using namespace std;

int main()
{
    int a[] = {78,56,75,25,11,52,45,3,8,1,98,95,85};
    int len = size(a);
    for(int i = 0; i< len-1; i++)
    {
        for(int j = 0; j< len-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i = 0; i<len-1; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}