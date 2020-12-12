#include<bits/stdc++.h>
using namespace std;
void printStack(stack<int> st)
{
    while(st.size()!=0)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
void swapa(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void reverseStack(stack<int> s)
{
    if(s.empty())
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        int* a=&(s.top());
        int* b=(a-s.size()+1);
        for(int i=0;i<s.size()/2;i++)
        {
            swapa(a,b);
            a=a-1;
            b=b+1;
        }
        cout<<"Reversal without using another stack :"<<endl;
        printStack(s);
    }
}
void reverseUsingAnotherStack(stack<int> s)
{
    stack<int>s1;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        s1.push(s.top());
        s.pop();
    }
    cout<<"reversal using another stack  :"<<endl;
    printStack(s1);
}
int main()
{
    //performing different operations on stack
    stack<int>s;
    s.push(1);
    s.push(8);
    s.push(0);
    s.push(5);
    s.emplace(3);
    s.emplace(9);
    s.emplace(2);
    cout<<"Stack s :"<<endl;
    printStack(s); //function to print a stacks element


    //trying to reverse a stack without using another stack
    reverseStack(s);

    //reversing a stack using two stacks
    reverseUsingAnotherStack(s);
    return 0;
}
