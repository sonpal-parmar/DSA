#include<bits/stdc++.h>
using namespace std;

void printSeries(int n)
{
    if(n > 0)
    {
        printSeries(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    printSeries(10);     
}