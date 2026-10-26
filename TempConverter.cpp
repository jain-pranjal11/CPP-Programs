#include <iostream>
using namespace std;

class Temperature{
    private:
        double celcius;
    public:
        void set_celcius(double cel){
            celcius = cel;
            cout<<"Temperature in Celcius: "<<celcius;
        }

        double get_fahrenheit(){
            double F;
            return F = celcius * (9.0 / 5.0) + 32;
        }
};




int main() {
    
    Temperature T;
    T.set_celcius(25);
    cout<<endl;
    cout<<"Temperature in Fahrenheit: ";
    cout<<T.get_fahrenheit();

    return 0;
}