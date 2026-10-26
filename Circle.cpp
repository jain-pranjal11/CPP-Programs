#include<iostream>
using namespace std;

class Circle{
    private:
        float radius;
        const float PI = 3.14;
    public:
        Circle(float r){
            radius = r;
        }

        void get_area() const{
            cout<<"Area of a Circle is "<<PI*radius*radius;
        }
};


int main(){

    Circle C1(4);
    C1.get_area();

    return 0;
}