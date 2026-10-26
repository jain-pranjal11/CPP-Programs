/*
#include <iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){
            cout<<"Vehicle constructor called with year 2024"<<endl;
        }
};

class Car:public Vehicle{
    public:
        Car(){
            cout<<"Car constructor called with 2 doors"<<endl;
        }
};

class SportsCar:public Car{
    public:
        SportsCar(){
            cout<<"SportsCar constructor called with speed 220"<<endl;
            cout<<"Ferrari created, Year: 2024"<<endl;
        }
};


int main() {
    
    SportsCar sc;

    return 0;
}
*/

#include <iostream>
using namespace std;

class Vehicle{
    protected:
        int year;
    
    public:
        Vehicle(int y) : year(y){
            cout<< "Vehicle constructor called with year "<<year<<endl;
        }
};

class Car: public Vehicle{
    private:
        int doors;

    public:
        Car(int y, int d) : Vehicle(y), doors(d){
            cout<<"Car constructor called with "<<doors<<" doors"<<endl;
        }
};

class SportsCar: public Car{
    private:
        int speed;
    
    public:
        SportsCar(int y, int d, int s) : Car(y,d), speed(s){
            cout<<"SportsCar constructor called with the speed "<<speed<<endl;

            cout<<"Ferrari created, Year: "<<year<<endl;
        }

        
};


int main() {

    SportsCar sc(2026, 2, 320);
    
    return 0;
}