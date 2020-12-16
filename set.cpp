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
    auto it=s.find(5); //points to position of 5 in p
    auto it1=s.find(6); //as 6 is not present it will point to the address after the last element
    s.erase(4); //erases 4
    s.erase(it); //erases 5
    s.erase(s.begin(),s.end()-1); //deletes all except last element
    auto it2=s.lower_bound(3); //returns address of 3
    auto it3=s.upper_bound(3); //as it should point to greater than 3 which does not exist thus points to address after last element
    auto it4=s.lower_bound(4); //as it is not present points to address after last element
    auto it5=s.upper_bound(4); //as it should point to greater than 4 which does not exist thus points to address after last element
    return 0;
}
