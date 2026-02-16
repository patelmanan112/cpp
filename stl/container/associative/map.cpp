#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int , string> m1;
    m1[3] = "Manan";
    m1[1] = "samir";


    map<char , int> m2;
    m2['f'] = 32;
    m2['z'] = 43;
    m2['a'] = 65; 
    m2['A'] = 65;
    for(auto& [key, value]: m1){
        cout<<  "Key is " << key<< " and it's value is " << value<< endl;
    }
for(auto& [key, value]: m2){
        cout<<  "Key is " << key<< " and it's value is " << value<< endl;
    }

    return 0;
}