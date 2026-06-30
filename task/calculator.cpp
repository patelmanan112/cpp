#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>
using namespace std;

void fileOperation(int a , int b , int ans , string oper){
    ofstream file;
    file.open("sample.txt");
    if(file.is_open()){
        file << "the input value is "<< a << " and " << b << " the answer is " << ans << " the operation  is " << oper << endl; 
    }
    file.close();
}
map <string , int > m1 = {
{"Add" , 0},
{"Sub" , 0},
{"Mul" , 0},
{"Div" , 0},
};
class Add{
 public :
    void addition(int a , int b){
        cout << "a<< b is called "<< endl;
         cout << "The arrgument is " << a << "and " << b << " = " <<" Operation is +";
         fileOperation(a , b , a+b , "+");
         m1["Add"]++;
    }

};
class Sub{
public :
void  subtraction(int a ,  int b){
        cout << "The arrgument is " << a << "and " << b << " = " <<" Operation is +";
         fileOperation(a , b , a-b , "-");
          m1["Add"]--;
}
};

class Multi{
    public : 
    void multiplication(int a , int b){
           cout << "The arrgument is " << a << "and " << b << " = " <<" Operation is +";
         fileOperation(a , b , a*b , "*");
    }
};

class div{
public :
void division(int a , int b){
        cout << "The arrgument is " << a << "and " << b << " = " <<" Operation is +";
         fileOperation(a , b , a/b , "/");
}
};
class Calculator: public Add , public Sub , public Multi , public div{
    public : 

};


int main(){
   
    int a;
    int b;
    cout << "Enter the value ";
    cin >> a;
    cin >>b;
    Calculator c1;
    c1.addition(a , b);
    cout << m1["Add"] ;

    return 0;
}