#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Book{
private:
int bookId;
string title;
string author;
public:
Book(int bookId , string title, string author){
  
    this->bookId = bookId;
    this->title = title;
    this->author = author;
}
friend void readData(Book& b1);
friend void writeData(Book& b1);
};


void readData(Book& b1){
    ifstream file("product.txt");
    string code;
    int count =0;
    if(file.is_open()){
        while(getline(file , code)){
            cout << code << endl;
            cout << count++ << endl;
            
        }
        file.close();
    }
}

void writeData(Book& b1){
    ofstream file("product.txt");

    if(file.is_open()){
        file << b1.author << endl;
        file << b1.bookId << endl;
        file << b1.title << endl;
        file.close();
    }
}
int main(){
    Book b1( 1 ,"Judge a book by it's cover", "Mann");
    writeData(b1);
    readData(b1);
    return 0;
}