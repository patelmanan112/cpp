#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string name;
    int id;
    int price;

    Book(string name, int id, int price)
    {
        this->name = name;
        this->id = id;
        this->price = price;
    }
    void display()
    {
        cout << "Name of the book is " << this->name << "Price is " << this->price << endl;
    }
};
int main()
{

    Book b1("Never judge a book by it's cover", 1, 69);
    b1.display();
    Book b2(" judge a book by it's cover", 1, 169);
    b2.display();
    Book b3("Can you judge a book by it's cover is good", 1, 269);
    b3.display();

    return 0;
}