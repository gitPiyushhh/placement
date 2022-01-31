#include<iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
using namespace std;

int main()
{
    /*
    //////////////////////////////////////////
    //////// Array
    array<int, 4> a= {1,2,3,4};

    //Size
    int size = a.size();

    cout<< size << endl;

    // Empty or not
    cout<< a.empty() << endl;

    // Return elements
    cout << a.front() << endl;
    cout << a.back() << endl;

    */

   /*

    //////////////////////////////////////////
    //////// Vector
    vector<int> v;
    
    cout<< v.capacity() << endl;

    // Push back
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // Pop back
    v.pop_back();

    cout<< v.capacity() << endl;

    cout<< v.at(0) << endl;
    cout<<"Front elem: " << v.front() << endl;
    cout<<"Back elem: " << v.back() << endl;

    for(int i:v){
        cout<< v[i] << " ";
    }

    */

   /*

    //////////////////////////////////////////
    //////// Deque

    deque<int> d;

    // Insertions
    d.push_back(2);
    d.push_back(3);
    d.push_front(1);
    d.push_front(0);
    cout << "Size is: " <<d.size() << endl;

    //Deletions
    d.pop_back();
    d.pop_front();

    for (int i: d) {
        cout << i << " ";
    }

    */

   /*

    //////////////////////////////////////////
    //////// Linked List

    list<int> li;

    li.push_back(2);
    li.push_back(3);
    li.push_front(1);

    for(int i: li) {
        cout << i << " ";
    }
    
    li.erase(li.begin());

    for(int i: li) {
        cout << i << " ";
    }

    */

   /*
    //////////////////////////////////////////
    //////// Stack
    
    stack <string> s;

    s.push("Piyush");
    s.push("Agarwal");
    s.push("Sultaniya");

    cout << "Top of stack: " << s.top() << endl;
    s.pop();
    cout << "Top of stack: " << s.top() << endl;

    */

   /*
    //////////////////////////////////////////
    //////// Queue

    queue <int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Top of queue: " << q.front() << endl;

    q.pop();

    cout << "Queue: " << q.front() << endl;

    */

    /*

    //////////////////////////////////////////
    //////// Priority queue

    priority_queue <int> maxi;

    maxi.push(2); 
    maxi.push(0); 
    maxi.push(3); 
    maxi.push(1);

    int n = maxi.size(); 

    for(int i=0 ; i<n ; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    } cout << endl;

    // Min-heap
    
    priority_queue <int, vector<int>, greater<int> > mini;

    mini.push(5);
    mini.push(3);
    mini.push(1);
    mini.push(2);
    mini.push(4);

    int m = mini.size();
    for(int i=0; i<m ; i++) {
        cout  << mini.top() << " ";
        mini.pop();
    }

    */

    set <int> s;

    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);

    set<int>::iterator it = s.find(1);

    cout << it;     

    for(int i:s) {
        cout << i << " ";
    }
    return 0;
}