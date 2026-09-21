#include <iostream>
using namespace std;

class Counter {

private:

    // Shared by the entire class
    static int count;

public:

    // Static member function
    static void showCount() {

        // Static functions can directly access
        // static data members
        cout << "Count = " << count << endl;
    }

};


// Define static data member
int Counter::count = 100;


int main() {

    // We DON'T need an object.

    // Call static function using class name
    Counter::showCount();
    
    return 0;
}