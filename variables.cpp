#include <iostream>
using namespace std;

int main() {
    // Variables are used to store data, so that we can use it later in the programing
    cout << "Variables in Cpp" << endl;

    int x = 5; // Integer variable
    float y = 5.99; // Floating point variable
    char z = 'D'; // Character variable

    // Mutiple variables can be declared in a single line
    float a , b ;
    a = 10; 
    b = 20; 

    // cout << x;
    // cout << "\n";

    cout << "Integer x = " << x << endl;
    cout << "Float y = " << y << endl;
    cout << "Character z = " << z << endl;

    cout<< "Multiplication of x and y is: " << x << " * " << y << " = " << x * y << endl;

    // We can also use C style printf function to print the output in Cpp
    printf("Multiplication of x and y is: %d * %2.f = %2.f\n", x, y, x * y);

    printf("division of a and b is:");
    cout << a / b << endl;


    // Updation of Variables in Cpp

    cout << "Before updating the value of x: " << x << endl;

    x += 5; // x = x + 5
    cout << "After updating the value of x: " << x << endl;
    cout << "Again updating the value of x: " << x << endl;

    x = 15 ;

    cout << "After again updating the value of x: " << x << endl;    

    return 0;

}