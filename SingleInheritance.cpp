#include <iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout << "Animal is eating generic food." <<endl;
        }

        void sleep(){
            cout << "Animal is sleeping." <<endl;
        }
};

class Dog:public Animal{
    public:
        void eat(){
            cout << "Dog is eating kibble." <<endl;
        }

        void bark(){
            cout << "Woof! Woof!" <<endl;
        }
};


int main() {
    
    cout <<"\n---Generic Animal Behavior---" <<endl;
    Animal a1;
    a1.eat();
    a1.sleep();

    cout <<"\n---Dog Behavior---" <<endl;
    Dog d1;
    d1.eat();
    d1.bark();
    d1.sleep();

    return 0;
}