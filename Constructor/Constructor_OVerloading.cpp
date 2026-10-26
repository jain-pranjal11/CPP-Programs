#include<iostream>
using namespace std;

class Box{
    int l,b,h;
    public:
        Box();
        Box(int);
        Box(int,int,int);
        void Show();
};

Box::Box(){
    cout<<"Enter value of l,b,h ";
    cin>>l>>b>>h;
}

Box::Box(int c){
    l=b=h=c;
}

Box::Box(int i, int j, int k){
    l = i;
    b = j;
    h = k;
}

void Box::Show(){
    cout<<l<<","<<b<<","<<h<<endl;
}

int main(){

    Box B1;
    Box B2(10);
    Box B3(2,5,7);

    B1.Show();
    B2.Show();
    B3.Show();

    return 0;
}