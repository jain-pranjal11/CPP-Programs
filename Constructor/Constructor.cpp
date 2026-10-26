#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int marks;
    public:
        //Default Constructor
        Student(){
            name = "Pranjal";
            age = 23;
            marks = 99;
        }

        //Parameterized Constructor
        Student(string n, int a, int m){
            name = n;
            age = a;
            marks = m;
        }

        //Copy Constructor
        Student(const Student &obj){
            name = obj.name; //here obj refers to S1
            age = obj.age;
            marks = obj.marks;
        }

        //Display Function
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};

int main(){

    Student S1; //Calls Default constructor
    S1.display();

    cout<<"\n";

    // string name;
    // int age;
    // int marks;

    // cout<<"Enter Name: ";
    // getline(cin,name);    //to take full name (i.e. Pranjal Jain)

    // cout<<"Enter Age: ";
    // cin>>age;

    // cout<<"Enter Marks: ";
    // cin>>marks;

    // Student S2(name,age,marks); //Calls Parameterized constructor
    // S2.display();

    cout<<"\n";
    Student S3(S1); //New obj S3 is being created
    S3.display();
}