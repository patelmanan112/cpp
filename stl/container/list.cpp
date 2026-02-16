#include <iostream>
#include <list>
using  namespace std;

int main(){
     list<int> l = {10, 20, 30};
     for(int value:l){
        cout<< value<< endl;
     }
     l.remove(20);
     l.reverse();
         for(int value:l){
        cout<< value<< endl;
     }
    return 0;
}