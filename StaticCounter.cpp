#include <iostream>
using namespace std;

class SerialGenerator{
    private:
        static int next_serial_no; //Deifnition
    public:
        int get_serial(){
            int current = next_serial_no;
            return next_serial_no++;
            return current;
        }
};

// Define and initialize the static member
//"Create the actual next_serial_number variable belonging to SerialGenerator."
// int SerialGenerator::next_serial_no = 1000;

int main() {
    
    SerialGenerator s1;
    SerialGenerator s2;
    SerialGenerator s3;

    cout<<s1.get_serial()<<endl;
    cout<<s2.get_serial()<<endl;
    cout<<s3.get_serial()<<endl;

    return 0;
}