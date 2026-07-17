#include <iostream>
using namespace std;
int main () {

    float x , area;
    cout << "Enter the radius of circle: ";
    cin >> x;
    cout << '\n';
    cout<< "You entered: " << x <<  endl;
    area = 3.14 * x * x;
    cout<< "Area of circle is: " << area << endl;

    // TypeCasting 

    int a = 10;
    float b = (float)a; // TypeCasting from int to float
    cout<< "Value of a is: " << a << endl;
    cout<< "Value of b is: " << b << endl;


    return 0;
}