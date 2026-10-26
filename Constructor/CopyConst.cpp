// A copy constructor is a special constructor used to create a new object by copying the data of an existing object.

//Interview Definition:-
// A copy constructor is a special constructor that initializes a newly created object using another object of the same class.

#include<iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        //Default constructor
        Point(){
            x = 10;
            y = 20;
        }

        //copy constructor
        Point(const Point &obj){
            x = obj.x;
            y = obj.y;
        }

        void Display(){
            cout<<x<<","<<y<<endl;
        }
};

int main(){

    Point P1;    //Default Constructor
    P1.Display();

    Point P2(P1); //Copy Constructor
    P2.Display();

    Point P3=P2;  //Copy Constructor
    P3.Display();

    Point P4;
    P4 = P1;    //copy assignment not constructor
    P4.Display();

    return 0;
}