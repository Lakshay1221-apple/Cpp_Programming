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

    (*ptr).display();
    ptr->display();

    Employee* dynamicEmp = new Employee(102, 92000.0);
    dynamicEmp->display();

    delete dynamicEmp;
    dynamicEmp = nullptr;

    return 0;
}