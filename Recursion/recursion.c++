#include <iostream>
using namespace std;

void greet(int n){
    if(n == 0) return;
    cout<< "Hello, World!" << endl;
    greet(n - 1); 
}

int main() {

    // Recursion is a programming technique where a function calls itself to solve a problem. 


    greet(3);
    

    return 0;
}