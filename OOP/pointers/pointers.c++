#include <iostream>

using namespace std;

int findMax(int* a, int* b) {
    if (*a > *b) {
        return *a;
    }
    return *b;
}

int mySwap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "After swapping: a = " << *a << ", b = " << *b << endl;

    return 0;
}

int computeStats(int* a, int* b) {
    int sum = *a + *b;
    int average = sum / 2;
    cout << "Sum: " << sum << ", Average: " << average << endl;
    return 0;
}

int add_multiply(int* a) {
    *a = *a + 10;
    *a = *a * 2;

    cout << "After adding 10 and multiplying by 2: " << *a << endl;

    return 0;
}

int main() {
    int num = 10;
    int* ptr = &num;
    *ptr = 20;

    cout << ptr << endl;
    cout << *ptr << endl;

    int a = 10;
    int b = 30;

    mySwap(&a, &b);

    int* x = &a;
    int* y = &b;

    computeStats(&a, &b);
    add_multiply(&a);

    int max = findMax(x, y);
    cout << "The maximum value is: " << max << endl;

    return 0;
}