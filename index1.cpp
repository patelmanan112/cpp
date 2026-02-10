#include <iostream>
#include <string>
using namespace std;
enum day{MONDAY ,TUESDAY,WEDMESDAY, THURSDAY, FRIDAY, SATURDAY,SUNDAY };
int main(){
    enum day a1 = MONDAY;

    cout << "the value is "<< a1<<endl;
    for(int i=a1; i<SUNDAY; i++){
        cout<< "The value of enum is "<< i<< endl;
    }

    return 0;
}