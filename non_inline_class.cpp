#include <iostream>
using namespace std;

class Rectangle {

private:
    int length;
    int width;

public:

    // Only declaration inside class
    int area();

    void setData(int l, int w);
};


// Function definition outside the class
// :: is the scope resolution operator
int Rectangle::area() {
    return length * width;
}


// Another member function defined outside
void Rectangle::setData(int l, int w) {
    length = l;
    width = w;
}


int main() {

    Rectangle r;

    r.setData(10, 5);

    cout << "Area = " << r.area();
    cout << endl;

    return 0;
}