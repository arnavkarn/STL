#include<bits/stdc++.h>
using namespace std;
//making a function for printing vector
void printVector(vector<int> v)
{
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*(it)<<" ";
    cout<<"\n";
}
int main()
{
    //vector initialization
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    //vector of pairs
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4); // no need for curly braces in emplace back for pair but for pair of pair it is needed..

    //vector having 5 elements each 100
    vector<int> v1(5,100); // has vector as {100, 100, 100, 100, 100}

    //vector having 5 elements but not initialized
    vector<int> v2(5); // has vector as {0, 0, 0, 0, 0} or may have garbage value as dependent on compiler

    //copying vector
    vector<int> v3(v1);

    //traversing in an vector using iterators
    vector<int>:: iterator it = v.begin(); // points at 1st element of vector v{1,2} i.e. 1
    cout<<"1st element of vector v : "<<*(it)<<endl;
    it++; //moved iterator forward
    cout<<"2nd element of vector v : "<<*(it)<<endl;

    //traversing vector of pairs
    vector<pair<int,int>>:: iterator iter = vec.begin();
    cout<<"1st element of vector vec : "<<iter->first<<" "<<iter->second<<endl;
    iter++;
    cout<<"2nd element of vector vec : "<<iter->first<<" "<<iter->second<<endl;

    //printing all elements of vector v1
    cout<<"Elements of vector v1 : ";
    for(vector<int>::iterator it1=v1.begin();it1!=v1.end();it1++)
    {
        cout<<*(it1)<<" ";
    }

    //printing all elements of vector v2, here we will make the printing easier
    cout<<"\nElements of vector v2 : ";
     for(auto it2=v2.begin();it2!=v2.end();it2++) //here auto will automatically detect which data type v2.begin is. prefer this as it makes accessing pairs easy
     {
         cout<<*(it2)<<" ";
     }

     //printing all elements if vector v3 without using iterators and just using vectors
     cout<<"\nElements of vector v3 : ";
     for(auto ve:v3) // this is for each operator i.e. for each element of v3 v3 will run
     {
         cout<<ve<<" ";
     }

     //knowing about different functions helpful in traversing
     vector<int> v4 = {1, 8, 0, 5, 3, 9, 2};
     cout<<"\n\nvector v4 : ";
     printVector(v4);
     cout<<"First element of vector v4 using begin() : "<<*(v4.begin())<<endl; //prints 1 as it points to first element of vector
     cout<<"Last element of vector v4 using end() : "<<*(v4.end()-1)<<endl; //prints 2 as end() points to the Empty or NULL space after the vector ends thus end()-1 points to 2
     //note: begin and end have iterator types whereas front and back are the data types so we use * in begin and end but not in back
     cout<<"Last element of vector v4 using back() : "<<v4.back()<<endl; //prints 2 as back is the last element of vector
     cout<<"First element of vector v4 using front() : "<<v4.front()<<endl; //prints 1 as front is the first element of vector
     // now let's learn about reverse begin and reverse end, similar to begin and end rbegin and rend are iterator type so we use *
     cout<<"Reverse first element of vector v4 using rbegin() : "<<*(v4.rbegin())<<endl;// prints 2 as it points to last element of vector
     cout<<"Reverse last element of vector v4 using rend() : "<<*(v4.rend()-1)<<endl;// prints 1 as rend points to the null element before 1st element
     //let us try to print the vector v4 in reverse order
     cout<<"Printing vector v4 in reverse order : ";
     for(auto it4=v4.rbegin();it4!=v4.rend();it4++)
     {
         cout<<*(it4)<<" ";
     }
     //at last let's learn about at function
     cout<<"\nPrinting element at index 3 from vector v4 : "<<v4.at(3)<<endl;// prints 5 as it is at index 3 on vector

     //erase elements from vector
     cout<<"\nDeleting 1st element from vector v4 using erase() : ";
     v4.erase(v4.begin()); //erases the 1st data element i.e. 1
     printVector(v4);
     cout<<"Deleting last element from vector v4 using erase() : ";
     v4.erase(v4.end()-1); //erases the last data element i.e 2
     printVector(v4);
     cout<<"Deleting last element using pop_back() : ";
     v4.pop_back(); //erases the last data element i.e. 9
     printVector(v4);
     cout<<"Deleting elements of range 2nd to 2ndlast from vector v4 using erase() : ";
     v4.erase(v4.begin()+1,v4.end()-1); // whenever we talk about a range the operation is done from 1st parameter to the previous of 2nd parameter
     printVector(v4);
     cout<<"Deleting every element from vector v4 : ";
     v4.clear();
     printVector(v4);

     //Insert to vectors
     cout<<"\nInserting {1,2} in vector v4 using insert() : ";
     v4.insert(v4.begin(),{1,2}); //inserts {1, 2} at beginning of vector v4
     printVector(v4);
     cout<<"Inserting 5 at index 1 in vector v4 using insert() : ";
     v4.insert(v4.begin()+1,5);
     printVector(v4);
     cout<<"Inserting 2 10s at index 2 using insert() : ";
     v4.insert(v4.begin()+2,2,10);
     printVector(v4);
     cout<<"Erasing 2 10s at index 2 using insert() : ";
     v4.erase(v4.begin()+2,v4.end()-1);//deleting the 2 10s
     printVector(v4);
     vector<int> rest1 = {8,0};
     vector<int> rest2 = {3,9};
     cout<<"Inserting vector rest1 : {8,0} at index 1 using insert() : ";
     v4.insert(v4.begin()+1,rest1.begin(),rest1.end());
     printVector(v4);
     cout<<"Inserting vector rest 2: {3,9} at index 3 using insert() : ";
     v4.insert(v4.begin()+3,rest2.begin(),rest2.end());
     printVector(v4);

     //use of swap()
     v4.swap(v1);
     printVector(v4);

     //use of empty() and size()
     cout<<"\nIs vector v4 empty and print the size : ";
     cout<<v4.empty()<<"\t"<<v4.size()<<endl; //returns 0 as vector v4 is not empty and size() returns the size of the vector
     v4.clear();
     cout<<"Is vector v4 empty and print the size : ";
     cout<<v4.empty()<<"\t"<<v4.size()<<endl; //returns 1 as vector v4 is empty

     //Ahsan Question
    vector<int>v45={6,7,11,4,3};
    vector<int>v46={8,9,5,10,1,12};
    v46.erase(v46.begin(),v46.begin()+2);
    v46.insert(v46.begin(),v45.begin(),v45.begin()+3);
    v46.insert(v46.end(),v45.begin()+3,v45.end());
    printVector(v46);
    return 0;
}
