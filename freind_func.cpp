#include <iostream>
using namespace std;

class Student{
    
    private:
    int marks = 10;

    public:

    friend void display(Student s); // friend function declaration
};

void display(Student s){
    cout << "Marks: " << s.marks << endl; // accessing private member of class Student
}

int main () {

    Student s;

    display(s); // calling friend function

    return 0;
}