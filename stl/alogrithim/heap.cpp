#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> v1 = {12,53,6,44,3,76,34};

    make_heap(v1.begin() , v1.end());
// by default it will form max_heap
    for( const auto& value : v1){
        cout << value << endl;
    }
    pop_heap(v1.begin(), v1.end());
    v1.pop_back();
    cout << "After pop()"<< endl;
     for( const auto& value : v1){
        cout << value << endl;
    }
    
    return 0;
}