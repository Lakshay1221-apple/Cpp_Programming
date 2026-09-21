#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Hello World" << endl; // here endl is used to print a new line
    
    cout << fixed << setprecision(2) << 10.2 / 3.0 << endl; // fixed is used to set the decimal point and setprecision is used to set the number of digits after the decimal point

    cout << setw(10) << 10.2 / 3.0 << endl; // setw is used to set the width of the output
    cout << right << setw(10) << 10.2 / 3.0 << endl; // right is used to set the alignment of the output to the right
    cout << left << setw(10) << 10.2 / 3.0 << endl; // left is used to set the alignment of the output to the left
    

    cout << setfill('#') << setw(10) <<  setprecision(2) << 10.2 / 3.0 << endl; // setfill is used to set the fill character for the output

    return 0;
}
