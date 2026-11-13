#include <iostream>
using namespace std;
int main () {

    for (int i = 1 ;  i <= 5 ; i++){ // this loop is for rows        
        for (int j = 1 ; j <= 3 ; j++){ // this loop is for columns
            cout << j;
        }
        cout << endl;
        
    }

    for (int i = 1 ;  i <= 5 ; i++){ // this loop is for rows        
        for (int j = 1 ; j <=  5 - i + 1 ; j++){ // this loop is for columns
            cout << (char)(j + 64); // prints column numbers as letters
        }
        cout << endl;
    }

     for (int i = 1 ;  i <= 5 ; i++){ // this loop is for rows        
        for (int j = 1 ; j <= i ; j++){ // this loop is for columns
            cout << "*";
        }
        cout << endl;
        
    }

    return 0;
}