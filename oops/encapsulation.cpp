#include <iostream>
#include <string>

using namespace std;
// Encapsulation class -> to secure the data members...
class BankAccount{
    private :
    int balance;
   string password;

    public:
    string username;

    BankAccount(string name , int bal , string pass){
        if((bal>0) && (pass.size() >0)){
            username = name;
            balance = bal;
            password = pass;
            cout << "The account is created" << endl;
        }
        else{
            cout << "Warning -> the required contains some harmful information pls  check it onces..." << endl;
        }
    }
    void setPass(string pass , string newPass){
        if(password == pass){
            password = newPass;
            cout << "Your password has been changed " << password << endl;
        }
        else{
            cout << "Your old password is wrrong " << endl;
        }
    }
    void setBalance(int bal){
        balance +=bal;
        cout << "Your account as been creteded by " <<  bal << "Your total balance is " << balance << endl;
    }
};
int main(){

BankAccount b1("Manan" , 456, "Manan112" );
b1.setBalance(1000);
b1.setPass("Manan112" , "Manan0112");
    return 0;
}