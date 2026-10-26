#include<iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int y,int m, int d){
            cout << "\nGiven Date: " << y << "-" << m << "-" << d << endl;
            this->year = y;
            this->day = d;

            if(m > 12 || m < 1){
                cout<<"Warning: Invalid month "<<m<<" provided. Setting to 1"<<endl;
                this->month = 1;
            }
            else{
                this->month = m;
            }

            cout<<"Valid Date: "<<this->year<<"-"<<this->month<<"-"<<this->day;
        }

};


int main(){

    Date d1(2025,4,11);
    Date d2(2025,13,21);

    return 0;
}


