#include <iostream>
using namespace std;

class Rectangle{
    public : 
    float length;
    float width;

    Rectangle( float len , float wid){
        length = len;
        width = wid;
    }

    void display(){
        cout << length*width << endl;
    }

};

int main(){

    Rectangle r1(10 , 12);
    Rectangle r2(130 , 2);
    r1.display();
    r2.display();

    return 0;
}