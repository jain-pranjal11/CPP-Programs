#include <iostream>
using namespace std;

template <class T>
class Example{
    T a,b;
    public:
        void inputdata(){
            cout <<"Enter the value of a and b: ";
            cin >> a >> b;
        }

        void display(){
            cout << "Value of a is: " << a << endl;
            cout << "Value of b is: " << b << endl;
        }
};

int main() {
    
    Example<int>obj1;
    cout << "\nFor integer data" << endl;
    obj1.inputdata();
    obj1.display();

    Example<float>obj2;
    cout << "\nFor float data" << endl;
    obj2.inputdata();
    obj2.display();

    Example<char>obj3;
    cout << "\nFor char data" << endl;
    obj3.inputdata();
    obj3.display();


    return 0;
}