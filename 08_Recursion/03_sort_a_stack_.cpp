#include<bits/stdc++.h>
using namespace std;

void part_Sort(stack<int>& s,int temp)
{
    if(s.empty() || temp > s.top())
    {
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();
    part_Sort(s,temp);
    s.push(val);
}




void sort_Stack(stack<int>& s)
{
    if(s.size() <= 1)
        return;
    int temp = s.top();
    s.pop();
    sort_Stack(s);
    part_Sort(s,temp);
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);

    sort_Stack(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    } 
}