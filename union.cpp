#include <iostream>
using namespace std;

union Data {

    int number;
    float decimal;
    char letter;
};

int main() {

    Data d;

    // Store an integer
    d.number = 100;

    cout << "Integer: " << d.number << endl;

    // Now store a float
    // It uses the SAME memory location
    d.decimal = 25.5;

    cout << "Float: " << d.decimal << endl;

    // Now store a character
    // Again, SAME memory
    d.letter = 'A';

    cout << "Character: " << d.letter << endl;

    cout << "\nSize of union: "
         << sizeof(Data) << " bytes" << endl;

    return 0;
}