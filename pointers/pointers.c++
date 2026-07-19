#include <iostream>
using namespace std;

void swap(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    // int x = 4;
    // int y = 4;
    // cout << &x << endl; // prints the address of x
    // cout << &y << endl; // prints the address of y

    // To store the address of any data type we use pointer variable 

    int x = 4;
    int y = 16;
    int* p = &x; // pointer variable p stores the address of x
    // cout << &p << endl; // prints the address of p (which is the address of x)

    // cout << *p << endl; // prints the value of x using pointer variable p

    *p = 34;
    // cout<< x << endl; // prints the value of x after changing it using pointer variable p

    swap(&x, &y);
    cout << x << " " << y << endl;

    return 0;
}