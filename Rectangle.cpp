#include<iostream>
using namespace std;

class Rectangle{
    private:
        int len,wid;
    public:
        Rectangle(int l,int w){
            len = l;
            wid = w;
        }
        
        void calculateArea(){
            cout<<"Area: "<<len*wid;
        }

        void calculatePerimeter(){
            cout<<"\nPerimeter: "<<2*(len+wid);
        }

};

int main(){

    Rectangle R1(10,20);
    R1.calculateArea();
    R1.calculatePerimeter();

    return 0;
}