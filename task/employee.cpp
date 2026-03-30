#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    string name;

    public: 
    static int counter;

    Employee(string name){
        counter++;
        this->name = name;
    }
    void display(){

        cout << "The name of Employee is " << this->name << "  " << this->counter << endl;
    }
};

int Employee::counter =0;
int main(){

    Employee e1("Manan");
    e1.display();
    Employee e2("Mannn");
    e2.display();

    return 0;
}