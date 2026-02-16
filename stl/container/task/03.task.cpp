#include <deque>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
   deque<string> d= {};
    string a1;
    cout<< "Enter the string : ";
    getline(cin , a1);
    
    string a2;
     cout<< "Enter the string : ";
    getline(cin , a2);
    string a3;
     cout<< "Enter the string : ";
    getline(cin , a3);

    d.push_front(a1);
    d.push_back(a2);
    d.push_back(a3);
    cout<< d.at(1);
    return 0;
}