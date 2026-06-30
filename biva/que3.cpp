#include <iostream>
#include <string>
using namespace std;

int main(){
    int count =0;
    int check =0;
    string str = "Hello this is manan";
    for(int i = 0 ; i<str.size() ; i++){
        if(str[i] == ' '){
            count =0;
        }
        if(str[i] != ' ' && i == str.size() -1){
            cout << count << endl;
            return count;
        }
        count++;
    }
    return 0;
}