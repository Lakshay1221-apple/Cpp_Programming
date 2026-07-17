#include <iostream>
using namespace std;
int main () {

    float num1;
    printf("Enter a number: ");
    cin >> num1;
    
    int n = (int)num1;

    if(n %  2 == 0){
        cout << "The number is even" << endl;
    }
    else{
        cout << "The number is odd" << endl;
    }

    int a , b;
    printf("Enter two numbers: ");
    cin >> a >> b;

    if (a == b){
        printf("The numbers are equal\n");
    } else if (a > b){
        printf("The first number is greater\n");
    } else {
        printf("The second number is greater\n");
    }

    if ( a < 0 ){
        a = -a;
        cout << "The absolute value of the first number is: " << a << endl;
    } else {
        cout << "The number is already positive: " << a << endl;
    }

    // Nested if - if statements inside another if statement
     
    int x , y , z ;
    printf("Enter three numbers: ");
    cin >> x >> y >> z;

    if (x > y) {
        if (x > z) {
            cout << "The first number is the greatest" << endl;
        } else {
                 cout << "The third number is the greatest" << endl;
        }
    } else {
        if (y > z) {
            cout << "The second number is the greatest" << endl;
        } else {
            cout << "The third number is the greatest" << endl;
        }
    }

    
    return 0;
}