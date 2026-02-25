#include <iostream>
#include <string>
using namespace std;
class Car{ 
public :   // to access  the member from anywhere modifier
    string company_name;
    int mileage;
    string engine;

    void print(){
        cout << "The print function has been exectuted " << this->engine;
    }
};


int main(){
    Car c1;
    c1.company_name = "Mannan";
    c1.mileage = 90;
    c1.engine = "400CC";
    cout<< c1.company_name<< endl;
    cout<< c1.mileage<< endl;
    c1.print();
    return 0;
}