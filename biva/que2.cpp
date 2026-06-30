#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> ans;
    for(int i=0; i<10; i++){
        int temp;
        cin >> temp ;
        ans.insert(temp);
    }

    auto  value = ans.find(20);
    if( value != ans.end()){
        cout << "Founded" << *value << endl;
    }

    return 0;
}