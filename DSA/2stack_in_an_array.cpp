#include <iostream>
using namespace std;

class TwoStacks{
    int *arr;
    int size;
    int top1,top2;

    public:
        TwoStacks(int n){
            size = n;
            arr = new int[n];
            top1 = -1;
            top2 = n;
        }

        //Push into Stack 1
        void push1(int x){
            if(top1 + 1 == top2){
                cout << "Stack OverFlow" << endl;
                return;
            }
            arr[++top1] = x;
        }

        //Push into Stack 2
        void push2(int x){
            if(top1 + 1 == top2){
                cout << "Stack OverFlow" << endl;
                return;
            }
            arr[--top2] = x;
        }

        //Pop from Stack 1
        int pop1(){
            if(top1 == -1){
                cout << "Stack 1 is Empty" << endl;
                return -1;
            }

            return arr[top1--];
        }

        //Pop from Stack 2
        int pop2(){
            if(top2 == size){
                cout << "Stack 2 is Empty" << endl;
                return -1;
            }

            return arr[top2++];
        }

        ~TwoStacks(){
            delete[] arr;
        }
};

int main() {
    
    TwoStacks s(5);

    s.push1(10);
    s.push1(20);

    s.push2(90);
    s.push2(80);

    cout << s.pop1() << endl;
    cout << s.pop2() << endl;

    return 0;
}