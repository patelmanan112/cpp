#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    string gender;
    int age;

    Student(string name, string gender, int age)
    {
        // as the parameter variable is local variable and the class variable is class member data will same then  it will massed up and it will through error so we can use this key word to solve this if you do not want to change any name of data type 
        this->name = name;
        this->gender = gender;
        this->age = age;
    };
    ~Student(){
        cout << "Hence you are free now"<< this->name<< endl;
    }

    void display()
    {
        cout << "The data which is intialise are : " << this->name << "  " << this->age << "  " << this->gender << endl;
    }
};

void  create(){
Student s2("Tulya ", "male", 50);
s2.display();
}
int main()
{
    Student s1("manan", "male", 18);
    s1.display();
    create(); 
    cout << "Iske baad jake costrutor destory hoga destructor ke madad se" << endl;
    return 0;
}