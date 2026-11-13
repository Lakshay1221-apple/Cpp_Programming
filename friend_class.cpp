#include <iostream>
using namespace std;

class A {

private:
    int x = 100;

    friend class B;
};

class B {

public:

    void display(A obj) {

        // B can access A's private member
        cout << obj.x;
    }
};

int main() {

    A a;
    B b;

    b.display(a);

}