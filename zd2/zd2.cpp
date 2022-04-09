
#include <iostream>
#include <cstring>
#include "Node.h"
#include "BinaryString.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");

    char a[20];
    cout << "Введите восмеричную строку" << endl;
    cin.getline(a, 79);

    BinaryString bit;
    bit.binary(a);
    cout << "Двоичное представление" << endl;
    cout << bit;

    string z = "5";
    string x = "6";
    Node v = z;
    Node b = x;
    if (v < b) {
        cout << "5<6";
    }

}
