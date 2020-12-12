#include<bits/stdc++.h>
using namespace std;
void printList(list<int> ls)
{
    for(auto it:ls)
        cout<<it<<" ";
    cout<<"\n";
}
int main()
{
    list<int> ls;
    ls.push_back(9);
    ls.emplace_back(2);
    printList(ls);

    //list also supports push_front() and emplace_front() which was not supported by vectors
    ls.push_front(3);
    ls.emplace_front(5);
    printList(ls);

    //rest all the functions are same as vector
    ls.insert(ls.begin(),{1,8,0});
    printList(ls);
    list<int>lsc={1,8,0,5,6,4,2};
    ls.swap(lsc);
    printList(ls);
    ls.erase(ls.begin(),ls.end());
    ls.insert(ls.begin(),lsc.begin(),lsc.end());
    printList(ls);
    lsc.clear();
    lsc.insert(lsc.begin(),{1,8,0,5,6,4,2});
    printList(lsc);


    return 0;
}
