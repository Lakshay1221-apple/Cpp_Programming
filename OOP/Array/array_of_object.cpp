#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int age;

    int display() {
        cout << "Name: " << name << ", Age: " << age << endl;
        return 0;
    }
};

int main () {
    student students[3] = {
        {"Alice", 20},
        {"Bob", 22},
        {"Charlie", 21}
    };

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }
    return 0;
}