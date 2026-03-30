#include <iostream>
#include <string>
using namespace std;


class Student{
    private:
    int grade;
    string password;

    public:
    string name;

    Student(int gra , string pass , string nam){

        if(gra >=0 && gra <=100){
        grade = gra;
        password = pass;
        name = nam;
        }
        else{
            cout << "Your grade is not between the range pls verify your marks once" << endl;
        }
    }

    void getResult(string pass ){
        if(pass == password){
            cout << "Student name " << name << " Marks are : " << grade << endl;
        }
        else{
            cout << "Your password is wrong" << endl;
        }
    }

    void setResult(string pass , int gra){
          if(pass == password){
           grade = gra;
           cout << "Your grade is " << grade << endl;
        }
        else{
            cout << "Your password is wrong" << endl;
        }
    }
    void getInfo(){
        cout << "Student name is : " << name << endl;
        cout << "Student grade is : " << grade << endl;
        cout << "Student password is : " << password << endl;
    }
};
int main(){

Student s1(98 , "Manan112" , "Patel Manan");
s1.getResult("Mann112");
s1.setResult("Manan112" , 80);
s1.getInfo();
    return 0;
}