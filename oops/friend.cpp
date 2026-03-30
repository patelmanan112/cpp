#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
   string name1;
    int roll_no;
    public :
    Student(  string name1 ,int roll_no){
        this->name1 = name1;
        this->roll_no = roll_no;
    }
    friend void display(Student& s1);
};

void display(Student& s1){
    s1.name1 = "Atul";

    cout << s1.roll_no << endl;
    cout << s1.name1;
}
using namespace std;
int main(){
    Student s1( "Manan" , 108659);
    display(s1);

    return 0;
}