#include <iostream>
#include <queue>
using namespace std;

class Queue{
    public:

    int* arr;
    int size;
    int qfront;
    int rear;

        Queue(int n){
            size = n;
            arr = new int [size];
            qfront = rear = 0;
        }

        void Enqueue(int element){
            if(rear == size){
                cout << "Queue is Full" << endl;
            }
            else{
                arr[rear] = element;
                rear++;   
            }
        }

        int Dequeue(){
            if(qfront == rear){
                cout << "Queue is Empty" << endl;
                return -1;
            }
            else{
                int ans = arr[qfront];
                arr[qfront] = -1;
                qfront++;
                if(qfront == rear){
                    qfront = 0;
                    rear = 0;
                }
                 return ans;
            }
           
        }

        int front(){
            if(qfront == rear){
                return -1;
            }
            else{
                return arr[qfront];
            }
        }

        bool isEmpty(){
            if(qfront == rear){
                cout << "Queue is Empty" << endl;
                return true;
            }
            else{   
                cout << "Queue is not Empty" << endl;
                return false;
            }
        }
};

int main(){

    Queue q(4);

    q.Enqueue(11);
    q.Enqueue(20);
    q.Dequeue();
    cout << q.front();

    return 0;
}











// int main() {
    
//     int n;
//     queue <int> q;

//     q.push(10);
//     q.push(20);
//     q.pop();
//     q.pop();

//     // cout << q.front() << endl;
//     // cout << q.back() << endl;

//     if(q.empty()){
//         cout << "Queue is empty" << endl;
//     }
//     else{
//         cout << "Queue is not empty" << endl;
//     }

//     return 0;
// }