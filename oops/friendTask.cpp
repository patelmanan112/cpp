#include <iostream>
#include <string>
using namespace std;

class Triangle;
class Rectange
{
private:
    int length1;
    int width1;

public:
    Rectange(int length, int width)
    {
        this->length1 = length;
        this->width1 = width;
        cout << "Area of Rectangle : " << length * width << endl;
    }
    friend void calculator(Triangle &t1, Rectange &r1);
};
class Triangle
{
private:
    int length2;
    int width2;

public:
    Triangle(int length, int width)
    {
        this->length2 = length;
        this->width2 = width;
        cout << "Area of Triangle : " << (length * width) / 2 << endl;
    }
    friend void calculator(Triangle &t1, Rectange &r1);
};
void calculator(Triangle &t1, Rectange &r1)
{
    cout << t1.length2 << t1.width2 << endl;
    cout << r1.length1 << r1.width1;
}
int main()
{
    Triangle t1(4, 5);
    Rectange r1(3, 6);
    calculator(t1, r1);
    return 0;
}