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
        cout << "Hence you are free now";
    }

    void display()
    {
        cout << "The data which is intialise are : " << this->name << "  " << this->age << "  " << this->gender << endl;
    }
};

int main()
{
    Student s1("manan", "male", 18);
    s1.display();
    cout << "Iske baad jake costrutor destory hoga destructor ke madad se" << endl;
    return 0;
}