#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    char c;
    cout<< "Enter a value of a : ";
    cin>> a;
     cout<< "Enter a value of b : ";
    cin>>b;
     cout<< "Enter a operation : ";
    cin>>c;
    switch(c){
        case '+' : cout<< a+b;
        break;
        case '-':   if(a>b){
            cout<< a-b;
            break;
        }
        else{
            cout<< b-a;
            break;
        }
        case '*': cout<< a*b;
        break;
        case '/': if(b ==0){
            cout<< "infinite try using diffrent value of b"<< endl;
            break;
        }
        else{
            cout<< a/b<< endl;
            break;
        }
        default : cout<< "Invalid operation try using '+', '-' , '/' , '*' "<<  endl;
        break;
    }

    return 0;
}