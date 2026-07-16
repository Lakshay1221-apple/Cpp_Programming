#include <iostream>
using namespace std;
int main () {

    float x , area;
    cout << "Enter the radius of circle: ";
    cin >> x;
    cout << '\n';
    cout<< "You entered: " << x << endl;
    area = 3.14 * x * x;
    cout<< "Area of circle is: " << area << endl;


    return 0;
}