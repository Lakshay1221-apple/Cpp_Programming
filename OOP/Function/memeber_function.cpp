#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class MyClass {
    private:
    string name;
    int roll_no;
    int marks[5]; // Array to store marks of 5 subjects
    int total_marks; // Variable to store total marks


    public:    

    // Constructor to initialize the private members
    MyClass(string n, int r, const int input_marks[5]) : name(n), roll_no(r), total_marks(0) {
        copy(input_marks, input_marks + 5, marks);
    }

    // Here void is a member function that displays the name and roll number of the object
    void display() {
        cout << "Name: " << name << ", Roll No: " << roll_no << endl;
    };

    // Member function to display the marks and total marks
    void displayMarks();
    void total_Marks();
};

void MyClass::displayMarks() {
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "Total Marks: " << total_marks << endl;
};

void MyClass::total_Marks() {
    total_marks = 0;
    for (int i = 0; i < 5; i++) {
        total_marks += marks[i];
    }
};

int main() {
    int marks1[5] = {85, 90, 78, 92, 88};
    int marks2[5] = {76, 82, 89, 74, 81};

    MyClass obj1("Alice", 101, marks1);
    MyClass obj2("Bob", 102, marks2);

    // Displaying the values using the display() member function
    obj1.display();
    obj1.total_Marks(); // Calculate total marks for obj1
    obj1.displayMarks();
    obj2.display();
    obj2.total_Marks(); // Calculate total marks for obj2
    obj2.displayMarks();

    return 0;
}