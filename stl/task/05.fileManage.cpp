#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int fileOperation(int data)
{
    ofstream file;
    file.open("sample.txt", ios::app);
    if (file.is_open())
    {
        file << data << endl;
        file.close();
    }
    return 1;
}
int fibonica(int a)
{
    int b = 0;
    int c = 1;
    int sum;
    for (int i = 1; i <= a; i++)
    {

        sum = c + b;
        b = c;
        c = sum;
        fileOperation(sum);
        printf("%d\n", sum);
    }
    return sum;
}

int main()
{
    int a;

    printf("Enter the value: ");
    scanf("%d", &a);

    printf("%d", fibonica(a));

    //  string data;
    // ofstream file;
    // file.open("sample.txt" );
    // if(file.is_open()){
    //     getline(cin , data);
    //     file << data <<endl;
    //     file.close();
    // }

    string setData;
    ifstream file1;
    file1.open("sample.txt");
    if (file1.is_open())
    {
        while (getline(file1, setData))
        {
            cout << setData << endl;
        }
        file1.close();
    }

    return 0;
}