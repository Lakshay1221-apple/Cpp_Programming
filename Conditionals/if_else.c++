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


    return 0;
}