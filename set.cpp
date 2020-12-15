#include<bits/stdc++.h>
using namespace std;
void printSet(set<int>st)
{
    for(auto it : st )
        cout<<it<<" ";
    cout<<endl;
}
int main()
{
    set<int>s;
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    printSet(s);
    cout<<"Size is : "<<s.size()<<endl;
}
