#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
    int length;
    int width;
    Shape(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
};

class Rectange : public Shape
{
public:
    Rectange(int length, int width) : Shape(length, width)
    {
        this->length = length;
        this->width = width;
            cout << "Area of Rectangle : " << length*width << endl;
    }
};
class Triangle : public Shape
{
public:
    Triangle(int length, int width) : Shape(length, width)
    {
        this->length = length;
        this->width = width;
        cout << "Area of Triangle : " << (length*width)/2 << endl;
    }

};
int main()
{
Triangle t1(2 , 4);
Rectange(3,5);
    return 0;
}