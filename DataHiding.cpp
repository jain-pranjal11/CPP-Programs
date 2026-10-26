#include <iostream>
using namespace std;

class Car{
    private:
        string make;
        string model;
        int year;

    public:
        Car(string m, string mod, int y) : make(m), model(mod), year(y){
        
        }

        void getMake(){
            cout<<"Made by: "<<make<<endl;
        }

        void getModel(){
            cout<<"Model: "<<model<<endl;
        }

        void getYear(){
            cout<<"Year: "<<year<<endl;
        }

        void setMake(string make){
            this->make = make;
        }

        void setModel(string model){
            this->model = model;
        }
};



int main() {
    
    Car C1("Toyota","Camry",2020);
    C1.getMake();
    C1.getModel();
    C1.getYear();

    cout<<endl;

    C1.setMake("Tata");
    C1.setModel("Curv");
    C1.getMake();
    C1.getModel();
    C1.getYear();

    return 0;
}