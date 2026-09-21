#include <iostream>
using namespace std;

// Enumeration containing named constants
enum Day {
    MONDAY,      // 0
    TUESDAY,     // 1
    WEDNESDAY,   // 2
    THURSDAY,    // 3
    FRIDAY,      // 4
    SATURDAY,    // 5
    SUNDAY       // 6
};

int main() {

    // Create an enum variable
    Day today = WEDNESDAY;

    cout << "Numeric value of today: "
         << today << endl;

    // We can compare enum values
    if (today == WEDNESDAY) {
        cout << "Today is Wednesday";
    }
    // we can also use a switch statement with enums

    switch (today) {
        case MONDAY:
            cout << "It's Monday!";
            break;
        case TUESDAY:
            cout << "It's Tuesday!";
            break;
        case WEDNESDAY:
            cout << "It's Wednesday!";
            break;
        case THURSDAY:
            cout << "It's Thursday!";
            break;
        case FRIDAY:
            cout << "It's Friday!";
            break;
        case SATURDAY:
            cout << "It's Saturday!";
            break;
        case SUNDAY:
            cout << "It's Sunday!";
            break;
    }

    
    return 0;
}