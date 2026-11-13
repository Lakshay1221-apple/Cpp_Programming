#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    double salary;

    Employee(int i, double s) : id(i), salary(s) {}

    int display() {
        cout << "ID: " << id << ", Salary: " << salary << "\n";
        return 0;
    }
};

int main() {
    Employee emp1(101, 75000.0);

    Employee* ptr = &emp1;

    (*ptr).display(); // here we are dereferencing the pointer to access the display method

    ptr->display(); // here we are using the arrow operator to access the display methodp
 

    return 0;
}