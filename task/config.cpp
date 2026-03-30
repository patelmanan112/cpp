#include <iostream>
#include <string>
using namespace std;

class Config{
private:
static int value;
public:

static void setValue(int v){
    value = v;
}
static void getValue(){
    cout << value << endl;
}
};

int Config::value = 0;

int main(){
 

Config::setValue(34);
Config::getValue();
    return 0;
}