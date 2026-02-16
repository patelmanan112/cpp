#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
 vector<int> v1 = {};
 int a =0;
 for(int i=0; i<10; i++){
    cout<< "enter the value : ";
    cin >> a;
    v1.push_back(a);
 }
    for(int j=0; j<10; j++){
        if(j%2==0){
            v1.erase(v1.begin() + j);
            cout<< j<<  endl;
        }
    }

    for(int value1 : v1){
        cout<< value1<< endl;
    }
    cout << v1.size();
    return 0;
}