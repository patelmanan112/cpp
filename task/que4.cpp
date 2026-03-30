#include <iostream>
#include <string>
using namespace std;

class Car{
    public :
string  carName;
int price;
static int totalCar;
Car(string carName , int price  ){
    this->carName = carName;
    this->price = price;
     ++totalCar;
    cout << totalCar << endl;
}
};
int Car::totalCar =0;
int main()
{
    Car c1("BMW" , 908);
    Car c2("CMW" , 908);
  
    return 0;
}