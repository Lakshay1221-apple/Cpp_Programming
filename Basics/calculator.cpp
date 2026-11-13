#include <iostream>
using namespace std;
int main () {
    // this is the code for a calculator in Cpp using switch case statement 

    char op;
    float num1, num2; 

    printf("Enter an operator (+, -, *, /): ");
    cin >> op;

    cout << "Enter the first number: " << endl ;
    cin >> num1;

    cout << "Enter the second number: " << endl ;
    cin >> num2;

    switch(op){

        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;        
    }

}