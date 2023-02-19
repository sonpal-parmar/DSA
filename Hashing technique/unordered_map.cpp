#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>m;

    m["geeks"]=20;
    m["mango"]=30;
    m.insert({"banana",45});
    for(auto x :m)
       cout<<x.first<<" "<<x.second;
    return 0;
}
