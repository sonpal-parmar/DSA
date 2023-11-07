#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
    int arr[100];
    int size;
    public:
    MinHeap(){
        arr[0] = -1;
        size = 0 ;
    }
    void insertion(int val)
    {
        size = size+1;
        int index = size;
        arr[index] = val;
        while(index > 1)
        {
            int parent = index/2;
            if(arr[index] > arr[parent])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else
               return;            
        }
    }
    void deletion()
    {

    }
    void print()
    {
        for(int i=1;i <= size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    MinHeap h;
    h.insertion(50);
    h.insertion(55);
    h.insertion(53);
    h.insertion(52);
    h.insertion(54);
    h.print();
}