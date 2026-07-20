#include <iostream>
#include <cmath>
using namespace std;

// void greet(int n){
//     if(n == 0) return;
//     cout<< "Hello, World!" << endl;
//     greet(n - 1); 


// }

// void print(int x, int n){
//     if (x > n) return;
//     cout << x << endl;
//     print(x + 1 ,n);
// }



int sum(int n ) {
    if (n == 1) return 1;
    return n + sum(n - 1);

}

int power(int a , int b ){
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {

    // Recursion is a programming technique where a function calls itself to solve a problem. 


    // greet(3);
    // cout << "Enter a number: ";
    // int j;
    // cin >> j;
    // print (1, j);

    int n ;
    cout << "Enter a number: ";
    cin >> n;
    cout << sum(n) << endl;

    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a power: ";
    cin >> b;
    cout << power(a, b) << endl;
    
    

    return 0;
}