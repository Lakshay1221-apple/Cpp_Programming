#include <iostream>
using namespace std;

int sum(int x , int y){
    int c =  x + y ;
    cout<< "Sum of two numbers is : " << c << endl;
    return c;
}

int main() {

    int a , b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    sum(a , b);

    return 0;
}