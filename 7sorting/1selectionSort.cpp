#include<iostream>
using namespace std;

int main()
{
    int a[] = {78,56,75,25,11,52,45,3,8,1,98,95,85};
    int len = size(a);
    for(int i = 0; i < len-1; i++)
    {
        int min_ind = i;
        for(int j = i+1; j<len-1;j++)
        {
            if(a[j]<a[min_ind])
                min_ind = j;
        }
        if(min_ind != i)
        {
              swap(a[i],a[min_ind]);
        }      
    }
    for(int i=0; i<len-1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


//   Selection sorting time complexity o(n**2)