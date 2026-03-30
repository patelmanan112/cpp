#include <iostream>
#include <string>

using namespace std;

// class Math{
// public:
//     void add(const auto& a , const auto& b){
//         cout << a + b << " Addition done" << endl;
//     }
// };


template<class T1  , class T2>
void add(T1 a ,  T2 b){
    const auto& c = a + b;
cout << c << endl;
}
int main(){


// Math m1;
// m1.add(21, 4);
// m1.add('a' , 'f');
// m1.add(3 , 2.3);
// m1.add(2.3 , 3);
add(3 , 4);
add('3' , '4');


    return 0;
}