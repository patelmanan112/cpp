#include <iostream>
#include <string>
using namespace std;
struct employee{
    int ID;
    string name;
    int salary;
};
int main(){
    employee emp[2];
    for(int i=0;  i<2; i++){
        cout<<"enter your id"<<endl;
        cin>> emp[i].ID;
         cout<<"enter your name"<<endl;
        cin>> emp[i].name;
         cout<<"enter your salary"<<endl;
        cin>> emp[i].salary;
    }

    int store =0;
    for (int j = 0; j<2; j++)
    {
       cout<<"given student data are :"<< emp[j].ID << emp[j].name<< emp[j].salary;
       int max =  emp[0].salary;
       if(emp[j].salary>max){
        max = emp[j].salary;
        store =j;
       }
    }
    cout<< emp[store].name << "it  has salary"<< emp[store].salary;
    
    return 0;
}