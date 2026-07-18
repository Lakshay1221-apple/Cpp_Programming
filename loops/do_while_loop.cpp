#include <iostream>
using namespace std;

int main () {

    // Do while runs at least once even if the condition is false

    int num = 11;

    do {
        cout << "Iteration: " << num << endl;
        num++;
    } while(num <= 10);

    printf("Enter a numbers to get the sum of all : ");
    int n , 
    sum = 0;
    cin >> n;

    while (n != 0){
        int ld = n % 10;
        n /= 10;
        sum += ld;
    }
    cout << "The sum of all digits is : " << sum << endl;



    return 0;

}