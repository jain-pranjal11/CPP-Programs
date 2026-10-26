#include <iostream>
using namespace std;

class Box{
    private:
        float length,width,height;
        float vol;
    public:
        void Accept(){
            cout<<"\nEnter length, width and height of box: ";
            cin>>length>>width>>height;
        }
        
        void CalVolume(){
            vol = length*width*height;
        }
        
        void Display(){
            cout<<"\nLength : "<<length;
            cout<<"\nWidth  : "<<width;
            cout<<"\nHeight : "<<height;
            cout<<"\n\nVolume : "<<vol;
        }
        
};

int main() {
    
    Box B1;
    B1.Accept();
    B1.CalVolume();
    B1.Display();

    return 0;
}