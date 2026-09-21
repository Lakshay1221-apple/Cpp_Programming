#include <iostream>
using namespace std;

// STRUCTURE
// Members of a struct are PUBLIC by default
struct Student {
    string name;
    int age;
};


// CLASS
// Members of a class are PRIVATE by default
class StudentClass {
    string name;   // private by default
    int age;       // private by default

public:
    // Public function to set private data
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    // Public function to display private data
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


int main() {

    // -------- STRUCT --------
    Student s1;

    // Direct access is allowed because struct members
    // are public by default
    s1.name = "Lakshay";
    s1.age = 20;

    cout << "STRUCT:" << endl;
    cout << s1.name << endl;
    cout << s1.age << endl;


    // -------- CLASS --------
    StudentClass s2;

    // Direct access would NOT be allowed:
    // s2.name = "Lakshay";  // ERROR
    // s2.age = 20;          // ERROR

    // We access private data through public functions
    s2.setData("Lakshay", 20);

    cout << "\nCLASS:" << endl;
    s2.display();

    return 0;
}