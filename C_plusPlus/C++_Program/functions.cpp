// In this file we are going to do the practical implementation of function overloading.

#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function for integer addition
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function for double addition
    double add(double a, double b) {
        return a + b;
    }

    // Overloaded display function that accepts integers
    void display(int a, int b) {
        cout << "The output of the add function with int parameters is: " << add(a, b) << endl;
    }

    // Overloaded display function that accepts doubles
    void display(double a, double b) {
        cout << "The output of the add function with double parameters is: " << add(a, b) << endl;
    }
};

int main() {
    Calculator c;
    
    cout << "This is a calculator class\n" << endl;
    
    // The compiler sees two integers and automatically routes this to display(int, int)
    c.display(1, 3);
    
    // The compiler sees two decimals and automatically routes this to display(double, double)
    c.display(2.5, 10.5);
    
    return 0;
}