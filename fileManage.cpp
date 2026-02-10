#include <iostream>
#include <fstream>
#include <string>
//(file name, ios::app)
using namespace std;
int main(){
    string data;
    ofstream file;
    file.open("sample.txt" );
    if(file.is_open()){
        getline(cin , data);
        file << data <<endl;
        file.close();
    }

//     string onelineStatement;
//     ifstream file;
//     file.open("sample.txt");
// if(file.is_open()){  
//       while(getline(file , onelineStatement)){
//         cout<< onelineStatement <<endl;
//     }
//     file.close();
// }

    return 0;
}


// insert fstream library 
// step 1 : ofstream fileVariableName
// step 2 : file.open("filename with attachement" , ios::app) 2nd argument is for appending and to avoid overwrite if we don't use this it will be overwrite with all current  file text to message you have send to it

// step 3 : file << "MEssage"<< endl;
// step 4 : file.close()