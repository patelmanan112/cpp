#include <iostream>
#include <set>

using namespace std;
int main(){
    set<int> s1 = {45,3,52,6,42,2};
    s1.insert(-78);
    for(int value:s1){
        cout<< value<< endl;
    }

    auto it = s1.find(52);
// auto is used because the index value is of which data type we don't so, it will automatically detech and use that particular data type for indexing
    if(it != s1.end()){ // in this s1.end() will check that if the length is completed and it does not found it as length then if condition will run or if found then else condition
        cout<< "Found : "<< *it<< endl;
    }
    else{
        cout<< "Not Found : "<< *it<< endl;
    }
    return 0;
}