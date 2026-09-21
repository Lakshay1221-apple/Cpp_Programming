#include <iostream>
using namespace std;

class Student {

private:

    // Static variable is SHARED by all objects
    static int count;

public:

    Student() {
        // Increase shared count whenever
        // a new Student object is created
        count++;
    }

    void displayCount() {
        cout << "Total objects: " << count << endl;
    }
};


// Definition and initialization of static member
// Traditional C++ syntax
int Student::count = 0;


int main() {

    Student s1;   // count = 1
    Student s2;   // count = 2
    Student s3;   // count = 3

    s1.displayCount();

    return 0;
}