#include <iostream>
#include <string>

using namespace std;


class Poly{
    public:
    void add(int a , int b){
        cout << "The sum of value a and b is : " << a+b << endl;
    }
    void add(int a , int b){
        cout << "The sum of value a and b is : " << a+b << endl;
    }

};
int main(){
    // polymorphism has two type runtime polymorphism and compiler time polymorphism 

    // compiler time polymorphism which is it takes dicision while code is executed
// polymorphism means k jab hamm same class mein same function name se multiple function define kare magar aek twist ke sath ke aagar aasa karne k jarurat padi to hame kuch change karna hoga taki compiler ko pata chale k konsa function ko run karna hai in that case we have to change there function arrgument

    // if it has same data type and same number of data type then it will show ambgious error or it shows overload error
Poly p1;
p1.add(10 , 12);



    return 0;
}