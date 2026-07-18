#include <iostream>
using namespace std;
int main () {

    for (int i = 1 ;  i <= 5 ; i++){ // this loop is for rows        
        for (int j = 1 ; j <=  i ; j++){ // this loop is for columns
            cout << "*"; // prints column numbers as letters
        }
        cout << endl;
    }

    for (int i = 1 ;  i <= 5 ; i++){ // this loop is for rows        
        for (int j = i ; j <=  1 ; j++){ // this loop is for columns
            cout << "*"; // prints column numbers as letters
        }
        cout << endl;
    }


    return 0;
}