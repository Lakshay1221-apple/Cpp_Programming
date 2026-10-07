#include <iostream>
using namespace std;
int main () {

    int a;
    printf("Enter a number: ");
    cin >> a; 
    cout << ((a % 2 ==0) ? "the number is even" : "the number is odd") << endl;

    return 0;
}