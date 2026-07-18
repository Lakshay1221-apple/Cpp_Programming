#include <iostream>
using namespace std;

int main () {

    // Do while runs at least once even if the condition is false

    int num = 11;

    do {
        cout << "Iteration: " << num << endl;
        num++;
    } while(num <= 10);

    return 0;

}