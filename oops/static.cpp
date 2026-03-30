#include <iostream>
#include <string>

using namespace std;

class CodingGita{
    public :
    string name;
   static string organization;
    int roll;
   static int totalStudent;
    
    CodingGita(string nam , int rn){
        name = nam;
        roll = rn;
        ++totalStudent;
    }

    void display(){
        cout << "Student name is -> " << this->name << endl;
        cout << "Roll number id -> " << this->roll << endl;
        cout << "total  number of student id -> " << this->totalStudent << endl;
    }
};
string CodingGita::organization = "CodingGita";
int CodingGita::totalStudent =0;
int main(){
    CodingGita c1("Manan" , 32);
    c1.display();
    CodingGita c2("Mann" , 12);
    c2.display();
    CodingGita c3("ann" , 2);
    c3.display();
    return 0;
}