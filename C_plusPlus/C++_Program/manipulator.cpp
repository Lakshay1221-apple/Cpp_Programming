#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Hello World" << endl; // here endl is used to print a new line
    
    cout << fixed << setprecision(2) << 10.2 / 3.0 << endl; // fixed is used to set the decimal point and setprecision is used to set the number of digits after the decimal point
    // fixed is used to get the output after the decimal point
    cout << setprecision(4) << 10.2 / 3.0 << endl; // setprecision is used to set the number of digits after the decimal point  

    cout << setw(10) << 10.2 / 3.0 << endl; // setw is used to set the width of the output
    cout << right << setw(10) << 10.2 / 3.0 << endl; // right is used to set the alignment of the output to the right
    cout << left << setw(10) << 10.2 / 3.0 << endl; // left is used to set the alignment of the output to the left
    

    cout << setfill('#') << setw(10) <<  setprecision(2) << 10.2 / 3.0 << endl; // setfill is used to set the fill character for the output

    double x = 12345.6789;

    cout << scientific << x; // scientific is used to set the output in scientific notation
    cout << endl;

    bool flag = true;
    cout << flag << endl; // output 1 

    cout << boolalpha << flag << endl; // output true

    int a = 25;

    cout << hex << a << endl; // output in hexadecimal
    cout << oct << a << endl; // output in octal
    cout << dec << a << endl; // output in decimal

    return 0;
}
