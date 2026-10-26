#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> reverseKElement(queue<int> q, int k){
    //Step 1: pop firtst k from queue & put into stack
    stack<int> s;

    for(int i=0; i<k; i++){
        int data = q.front();
        q.pop();
        s.push(data);
    }

    //Step 2: fetch elements from stack & put into queue
    while(!s.empty()){
        int data = s.top();
        s.pop();
        q.push(data);
    }

    //Step 3: fetch first (n-k) elements from queue & pushback into queue
    int t = q.size()-k;

    for(int i=0; i<t; i++){
        int data = q.front();
        q.pop();
        q.push(data);
    }

    return q;
}

int main() {
    
    //Declaration of queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    //Printing original queue
    cout << "Original Queue: ";
    queue<int> temp = q; //copy for printing

    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }

    //Printing reversed queue
    cout << "\nAfter reversing: ";
    queue<int> reversed = reverseKElement(q,3);

    while(!reversed.empty()){
        cout << reversed.front() << " ";
        reversed.pop();
    }

    return 0;
}