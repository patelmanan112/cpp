#include <iostream>
#include <map>

using namespace std;

int main(){


    map<int ,string> m2;
        m2.insert({1, "Manan"});
        m2.insert({2, "Samir"});
        m2.insert({2, "Sir"});

        for(auto& [key , value]: m2){
            cout<< "Key is " << key << " value is "<< value << endl;

        }

    return 0;
}