#include <iostream>
#include <string>
using namespace std;

class GradeBook {
    private: // access specifier
    string courseName;
    string studentName;

    public: // access specifier
    void setStudentName(string name);

    void setCourseName(string name){
        courseName = name;
    }

    string getCourseName() {
        return courseName;
    }   

        string getStudentName() {
        return studentName;
    }

        void displayMessage(){
            cout << "Welcome to the grade book for " << getCourseName()  << "!" << "by" << getStudentName() << "!" << endl;
        };
};

void GradeBook::setStudentName(string name){
    studentName = name;
}

int main() {

    string nameOfCourse;
    string nameOfStudent;

    cout << "Enter the course name: ";
    getline(cin, nameOfCourse);

    cout << "Enter the student name: ";
    getline(cin, nameOfStudent);

    GradeBook myGradeBook;

    myGradeBook.setCourseName(nameOfCourse);

    myGradeBook.setStudentName(nameOfStudent);
    myGradeBook.displayMessage();

    return 0;
}