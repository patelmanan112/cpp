#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    vector<int> v1;
       ofstream file;
       file.open("output.txt");
    int a ;
    int b;
    cin>> a;
    for(int i=0; i<a; i++){
        cout  << "enter the value for vector"<< endl;
        cin>> b;
        v1.push_back(b);
    }
    sort(v1.begin() , v1.end());
    reverse(v1.begin(),  v1.end());
    int sum =0;
    for(int value : v1){
        sum +=value;
    }
     if(file.is_open()){
        file << sum <<endl;
        file.close();
    }

    return 0;
}