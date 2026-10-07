#include <iostream>
using namespace std;

// refrence is alias of X and pointer stores the address of X.

int main () {

    int x = 10; // x = 10
    int &ref = x; // reference variable  ref = 10

    ref = 50; // changing the value of x through reference variable ref = 50 = x

    x = 100; // changing the value of x directly, this could also the change the value of ref = 100 = x

    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;
}