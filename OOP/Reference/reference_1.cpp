#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 39;

    int& ref = a; // ref is a reference to a
    int* ptr = &a; // ptr is a pointer to a

    // both ref and ptr can be used to modify the value of a
    *ptr = 20;
    ref = 50;

    ptr = &b; // ptr now points to b, references cannot be changed to refer to another variable

    cout << "Value of ref: " << ref << endl; // Output: 39
    cout << "Address of ptr: " << *ptr << endl; // Output: 39

    int temp = a;
    ref = b; // one pointer can not be used to another variable instead it will make the value of a equal to b
    b = temp;

    cout << "Value of a: " << a << endl; // Output: 39
    cout << "Value of b: " << b << endl; // Output: 50
};