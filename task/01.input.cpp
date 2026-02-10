#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value : ";
    cin>>a;

    int res =0;
    int temp =a;
    while(temp>0){
        int upd = temp%10;
        res = res*10 + upd;
        temp = temp/10;
    }
    if(res == a){
        cout<<"The value is palindrome";
    }
    else{
        cout<<"The value is not a palindrome";
    }

    return 0;
}