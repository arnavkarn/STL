#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    //functions
    q.push(1); //pushes 1 to queue
    q.emplace(8); //inserts 8 in queue
    cout<<q.front()<<endl; //displays first element
    cout<<q.back()<<endl; //displays second element
    q.pop(); //deletes first element
    cout<<q.size()<<endl; //gives size of queue
    queue<int> q1;
    q.swap(q1); //swaps queue
    cout<<q.empty()<<endl; //returns 1 if empty 0 if non-empty

}
