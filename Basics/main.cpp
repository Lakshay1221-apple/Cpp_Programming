#include <iostream>
using namespace std;
int main () {
    // Cout is used for starting the line and endl is used for ending the line 

    

    cout<< "Hello world " << endl;
    cout << "the product of 5 and 10 is: " << 5 * 10 << endl;

    string name;
    int roll;
    float marks ;
    float  marks2;
    float marks3 ;
    float marks4; 

    cin >> roll;
    cin >> marks;
    cin >> marks2;
    cin >> marks3;
    cin >> marks4;

    cout << "Roll number: " << roll << endl;
    cout << "Marks: " << marks << endl;
    cout << "Marks2: " << marks2 << endl;
    cout << "Marks3: " << marks3 << endl;
    cout << "Marks4: " << marks4 << endl;
    cout << "Average marks: " << (marks + marks2 + marks3 + marks4) / 4 << endl;

    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    
    return 0;
}