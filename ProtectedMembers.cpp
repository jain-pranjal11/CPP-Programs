#include <iostream>
using namespace std;

class Person{
    protected:
        int age;
    
    public:
        Person(){
            age=0;
        }
};

class Student:public Person{
    public:
    void setAge(int a){
        age = a;
    }

    void displayAge(){
        cout<<"Student Age: "<<age<<endl;
    }
};

class Teacher:public Person{
    public:
    void setAge(int a){
        age = a;
    }

    void displayAge(){
        cout<<"Teacher Age: "<<age<<endl;
    }
};



int main() {
    
    Student s1;
    Teacher t1;

    s1.setAge(20);
    t1.setAge(35);

    s1.displayAge();
    t1.displayAge();
    
    return 0;
}