#include<iostream>
using namespace std;

class Student{
    private:
        int roll;
        string name;
    public:
        Student(int r, string n){
            roll = r;
            name = n;
            cout<<"Roll: "<<r;
            cout<<"Name: "<<n;
        }

        Student(const Student &s){
            roll = s.roll;
            name = "";
        }
};

int main(){
    Student s1(101,"Pranjal");
    Student s2=s1;

    return 0;
}