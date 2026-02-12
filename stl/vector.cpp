#include <iostream>
#include <vector>
using  namespace std;

int main(){
        vector<int> v = {1,2,3,4};
        v.push_back(67);
        v.push_back(69);
        v.pop_back();
        v.insert(v.begin()+1, 56);
        v.erase(v.begin()+1);
        
       for(int value :v){
        cout << value <<endl;
       }
    return 0;
}