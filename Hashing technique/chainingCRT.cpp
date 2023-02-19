#include<iostream>
using namespace std;

struct MyHash
{
    int BUCKET;
    list <int>*table;
    MyHash(int b)
    {
        BUCKET=b;
        table = new list<int>[b]; 
    }
    void insert(int key)
    {
        int i= key%BUCKET;
        table[i].push_back(key);
    }
    //bool search(int key);
    void remove(int Key){
        int i = key % BUCKET;
        table[i].remove(key);
    }
}st;



int main()
{
    st.insert(10);
    st.remove(10);
    return 0;
} 