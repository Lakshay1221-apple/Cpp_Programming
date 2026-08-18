#include <iostream>
using namespace std;

int main() {
    int array[5];

    printf("Enter array elements: ");

    for (int i = 0; i < 5; i++){
        cin >> array[i];
    }

    cout << array[10] << endl;

    return 0;
}