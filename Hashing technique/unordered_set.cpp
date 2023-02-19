#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    // unordered_set
    //  for (int x : s)
    //      cout << x << " ";

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout<<endl;
    cout<<s.size()<<endl;
    s.clear();
    cout<<s.size();    
    return 0;
}