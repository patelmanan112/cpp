#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main(){

    // ===== find =======//
    // vector<int> v1 = {1,43,663,75};

    // auto it = find(v1.begin() , v1.end() , 75); 
    // cout << *it << endl;
    // if(it != v1.end()){
    //     cout << "Element is : " << *it << endl;
    // }
    // else{
    //     cout << "Element doesn't exist"<< endl;
    // }



    // ======Sort======//
    list<int> v1 = {1,43,663,75};


    sort(v1.begin() , v1.end());
    for(auto& value : v1){
        cout << value << endl;
    }
    return 0;
}