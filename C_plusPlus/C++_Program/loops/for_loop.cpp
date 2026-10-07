#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 6; i++) {
        cout << "Iteration: " << i << endl;
    }

    int num ;
    cout << "Enter a number: ";
    cin >> num;
    bool isPrime = true;

    if (num < 0){
        cout<< "the number is neither prime nor composite"<<endl;
    }
    
    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }  

    return 0;
}

