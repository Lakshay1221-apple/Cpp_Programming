#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;

    while (n != 0) {
        count++; 
        n /= 10;
    }

    return count;
}

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

bool isArmstrong(int n) {
    int original = n;
    int digits = countDigits(n);
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += power(digit, digits);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong number";
    else
        cout << n << " is not an Armstrong number";

    return 0;


    // linked list 

    
}