#include <iostream>
using namespace std;
int main() {
    cout << "Arthmetic Operators in Cpp" << endl;

    float a , b;
    a = 10; 
    b = 8;

    printf("Value of a is: %2.2f", a);
    cout << "\n";
    printf("Value of b is: %2.2f", b);
    cout << "\n";

    cout<< "Addition of a and b is: " << a << " + " << b << " = " << a + b << endl;
    cout<< "Subtraction of a and b is: " << a << " - " << b << " = " << a - b << endl;
    cout<< "Multiplication of a and b is: " << a << " * " << b << " = " << a * b << endl;
    cout<< "Division of a and b is: " << a << " / " << b << " = " << a / b << endl;
    cout<< "Modulus of a and b is: " << a << " % " << b << " = " << (int)a % (int)b << endl;

    cout<< a++ << endl;
    cout<< a << endl;

    cout<< ++b << endl;
    cout<< b << endl;

    float area = 3.14 * a * a;
    cout<< "Area of circle is: " << area << endl;



    return 0;
}