// In this file we are going to do the practical implimentation of function overloading in C++ programming language.

// function overloading is having the same function name but different parameters. It is a compile time polymorphism.
#include <iostream>
using namespace std;

class Calculator {

    public:


    
    int add(int a , int b){
        return a + b;
    }

    double add(double a, double b){
        return a + b;
    }


};

int main () {

    Calculator c;

    cout << c.add(2 , 10) << endl; // here the first add function will be called because the parameters are of type int
    cout << c.add(2.5 , 10.5) << endl; // here the second add function will be called because the parameters are of type double

    return 0;
}