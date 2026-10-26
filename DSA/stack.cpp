#include <iostream>
using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int size;
        int top;

    //behaviors
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top < 0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    
    Stack s(4);

    s.push(11);
    s.push(34);
    // s.push(22);
    // s.push(65);
    // s.push(43);

    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    
    if(s.isEmpty())
        cout << "Stack is Empty" << endl;
    else    
        cout << "Stack is not Empty" << endl;

    return 0;
}