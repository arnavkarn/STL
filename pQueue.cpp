#include<bits/stdc++.h>
using namespace std;
void printPQ(priority_queue<int>pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
void printPQi(priority_queue<int, vector<int>, greater<int>>pq) //here i stands for increasing order
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
int main()
{
    priority_queue<int>pq;
    pq.push(1);
    pq.push(8);
    pq.push(0);
    pq.push(5);
    pq.push(3);
    pq.push(9);
    pq.push(2);
    cout<<"pq : ";
    printPQ(pq);
    priority_queue<int, vector<int>, greater<int>>pq1;
    while(!pq.empty())
    {
        pq1.emplace(pq.top());
        pq.pop();
    }
    cout<<"pq1 : ";
    printPQi(pq1);
    cout<<"Is pq empty? If no, print size."<<endl;
    if(pq.empty())
        cout<<"yes"<<endl;
    else
    {
        cout<<"no, the size is "<<pq.size()<<endl;
    }
    cout<<"Is pq1 empty? If no, print size."<<endl;
    if(pq1.empty())
        cout<<"yes"<<endl;
    else
    {
        cout<<"no, the size is "<<pq1.size()<<endl;
    }

    return 0;
}
