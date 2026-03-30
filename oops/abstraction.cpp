#include <iostream>
#include <string>
using namespace std;
// abstract class we can not create the obj of the abstract class 
class Car{
public:

// pure virtual function 
virtual void engineInfo() =0;
virtual void breakInfo() =0;

};
class Tata : public Car{

    public:
    void engineInfo(){
        cout << "Engine is 1000cc"<< endl;
    }
    void breakInfo(){
        cout << "Break are used to stop the car and relax when we need" << endl;
    }
};
int main(){

    Tata t1;
    t1.engineInfo();
    t1.breakInfo();
    return 0;
}