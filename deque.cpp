//deque stands for double ended queue
#include<bits/stdc++.h>
using namespace std;
void printDequeue(deque<int>dq)
{
    for(auto it:dq)
        cout<<it<<" ";
    cout<<endl;
}
int main()
{
    deque<int> dq;
    dq.push_back(1); //no curly brackets for deque i.e. no multiple insertions using push_back or emplace_back
    dq.emplace_back(2);
    dq.push_front(3); //same goes for front as well
    dq.emplace_front(4);
    dq.pop_front(); //not available in vector
    printDequeue(dq);


    //other functions same as vector
    dq.insert(dq.end(),{1,2,3,4,5,6});
    dq.pop_back();
    printDequeue(dq);
    return 0;
}
