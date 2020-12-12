#include<bits/stdc++.h>
using namespace std;
struct employee
{
    string name;
    double salary;
};
class student
{
private:
    string name;
    int age;
public:
    void putstudentdata(int a, string n)
    {
        name=n;
        age=a;
    }
    void getstudentdata()
    {
        cout<<"Name : "<<name<<"\t"<<"Age : "<<age<<endl;
    }
};
int main()
{
    cout<<"pair of integers : "<<endl;
    pair<int,int> p={5,6};
    cout<<p.first<<" "<<p.second<<endl;

    cout<<"\npair of pair of integers : "<<endl;
    pair<pair<int,int>,pair<int,int>>p1= {{2,3},{5,9}};
    cout<<p1.second.first<<p1.first.second<<p1.second.second<<p1.first.first<<endl;

    cout<<"\npair of two structures : "<<endl;
    pair<employee,employee>p2;
    p2.first.name="Arnav Karn";
    p2.first.salary=700.50;
    p2.second.name="Ahsan Zaki Ansari";
    p2.second.salary=1000.25;
    cout<<"Name : "<<p2.first.name<<"\t"<<"Salary : "<<p2.first.salary<<endl<<"Name : "<<p2.second.name<<"\t"<<"Salary : "<<p2.second.salary<<endl;

    cout<<"\npair of two classes : "<<endl;
    pair<student,student>p3;
    p3.first.putstudentdata(20,"Manish");
    p3.second.putstudentdata(22,"Mukesh");
    p3.first.getstudentdata();
    p3.second.getstudentdata();

    cout<<"\npair of a class and a structure : "<<endl;
    pair<employee,student>p4;
    p4.first.name="Arnav Karn";
    p4.first.salary=700.50;
    cout<<"Name : "<<p4.first.name<<"\t"<<"Salary : "<<p4.first.salary<<endl;
    p4.second.putstudentdata(22,"Mukesh");
    p4.second.getstudentdata();

    cout<<"\narray of pairs : "<<endl;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<"\t"<<arr[0].second<<endl;
    cout<<arr[2].first<<"\t"<<arr[2].second<<endl;
    return 0;
}
