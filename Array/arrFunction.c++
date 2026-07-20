#include <iostream>
using namespace std;

void change(int arr[]) {
    arr[0] = 100;
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    change(arr);

    // cout << arr[0];p

    int y[13] = {1, 2, 3, 4, 5, 33, 44, 55, 66, 999, 77, 88, 99};
    int max = y[0];
    for (int i = 0; i < 13; i++){
        if (y[i] > max) {
            max = y[i];
        }
    }

    cout << max;

    return 0;
}