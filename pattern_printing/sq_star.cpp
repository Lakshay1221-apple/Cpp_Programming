#include <iostream>
using namespace std;
int main () {

    for (int i = 1 ;  i <= 5 ; i++){ // this loop is for rows
        
        for (int j = 1 ; j <= 3 ; j++){ // this loop is for columns
            cout << "*";
        }
        cout << endl;
        
    }

    for (int i = 1 ;  i <= 5 ; i++){ // this loop is for rows        
        for (int j = 1 ; j <= 3 ; j++){ // this loop is for columns
            cout << j ;
        }
        cout << endl;
        
    }

    return 0;
}