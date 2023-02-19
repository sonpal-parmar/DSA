#include<iostream>
using namespace std;

int main()
{
    int a=7, b=13;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
           b=b-a;
    }
    cout<<a;
    return 0;
}