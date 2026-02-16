#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    vector<int> m1 = {};
    int a;
    for(int i=0; i<5; i++){
        cout<< "Enter the value :";
        cin >>a;
        m1.push_back(a);
    }

    sort(m1.begin() , m1.end());
    for(int value: m1){
     cout << value<< endl;
    }

    sort( m1.end() ,m1.begin());
      for(int value1: m1){
     cout << value1<< endl;
    }
    
    return 0;
}