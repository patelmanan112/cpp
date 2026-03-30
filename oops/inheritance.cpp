#include <iostream>
#include <string>
using namespace std;
class Laptop
{
public:
    string ram = "Ava";
    string storage = "Ava";
    string mother_board = "Ava";

    // Laptop(string ram , string storage , string mother_board){
    //     this->ram = ram;
    //     this->storage = storage;
    //     this->mother_board =mother_board;
    // }
   void call(){
        cout << "Parent called baap ko bulaya hai" << endl;
    }
};


class Leveno : public Laptop
{
    // distinct data member
public:
    string storage_type;

    Leveno(string storage_type){
        this->storage_type = storage_type;
    }
    
};
int main()
{
Leveno l1("SSD");
l1.call();
    return 0;
}