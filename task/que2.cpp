#include <iostream>
#include <string>
using namespace std;
string name;
int age;
int emp_id;
int salary;
string department;
string task;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
class Employee : public Person
{
public:
    int emp_id;
    int salary;
    Employee(int emp_id, int salary, string name, int age) : Person(name, age)
    {
        this->emp_id = emp_id;
        this->salary = salary;
    }
};
class Manager : public Employee
{
public:
    string department;
    string task;

    Manager(string department, string task, int emp_id, int salary, string name, int age) : Employee(emp_id, salary, name, age)
    {
        this->department = department;
        this->task = task;
    }

    void display()
    {
        cout << " the department is : " <<  this->department <<  " the task is : " <<  this->task  << " the salary is : " << this->salary << " the employee id is : " <<  this->emp_id  <<  " the age  is : " << this->age << " the name is : " <<  this->name;
    }
};
void fillTheGap()
{
    cout << "enter the department : ";
    cin >> department;
    cout << "enter the task : ";
    cin >> task;
    cout << "enter the emp_id : ";
    cin >> emp_id;
    cout << "enter the salary : ";
    cin >> salary;
    cout << "enter the name : ";
    cin >> name;
    cout << "enter the age : ";
    cin >> age;
}
int main()
{

    fillTheGap();
    Manager m1(department, task, emp_id, salary, name, age);
    m1.display();
    return 0;
}