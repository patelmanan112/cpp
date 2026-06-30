#include <iostream>
#include <string>
#include <map>
using namespace std;

// class Math{
// public:
//     void add(const auto& a , const auto& b){
//         cout << a + b << " Addition done" << endl;
//     }
// };


template<class T1  , class T2>
// void add(T1 a ,  T2 b){
//     const auto& c = a + b;
// cout << c << endl;
// }

class Pair{
public:

T1 first;
T2 second;
    Pair(T1 fi , T2 se){
    first = fi;
    second  = se;
    }
    void display(){
        cout << "First value is " << first << " and the second value is " << second << endl;
    }
};
int main(){
// Math m1; 
// m1.add(21, 4);
// m1.add('a' , 'f');
// m1.add(3 , 2.3);
// m1.add(2.3 , 3);
// add(3 , 4);
// add('3' , '4');
Pair<int , float> p1(4 , 5.4);
    p1.display();

    return 0;

}
