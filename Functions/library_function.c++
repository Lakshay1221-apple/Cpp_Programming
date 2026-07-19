#include <iostream>
#include <cmath>
using namespace std;

void pascalTriangle(int n) {
    for (int line = 0; line < n; line++) {
        int C = 1; // used to represent C(line, i)
        for (int i = 0; i <= line; i++) {
            cout << C << " ";
            C = C * (line - i) / (i + 1);
        }
        cout << endl;
    }
}

int main() {

    cout << sqrt(16) << endl;
    cout << pow(2, 3) << endl;

    pascalTriangle(5);




    return 0;
}