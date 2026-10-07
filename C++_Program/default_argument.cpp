#include <iostream>
using namespace std;

int add(int a , int b = 10); // function overloading with default argument 

int add(int a , int b){
    return a  + b;
}

int main () {
    cout << add(2 , 10) << endl;
    cout << add(20) << endl;

    return 0;
}