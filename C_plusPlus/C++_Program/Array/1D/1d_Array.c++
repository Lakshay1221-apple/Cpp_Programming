#include <iostream>
using namespace std;

int main() {

    int x[5];
    int y[5] = {6 , 7, 8, 9, 10};

    cout << "Enter array elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> x[i];
    }

    cout<< "Array elements are: ";

    for (int i = 0; i < 5; i++) {        
        cout << x[i] << " ";
    }

    cout << "reverse array y  elements are: ";

    for (int i = 4; i >= 0; i--) {
        cout << y[i] << " ";
    }

    return 0;
}