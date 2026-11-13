#include <iostream>
#include <string>
using namespace std;

int main(){

    string name = "John Doe";
    string name2 = "Jane Smith";

    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    cout << "Substring (0, 4): " << name.substr(0, 4) << endl;

    if (name == name2) {
        cout << "Names are equal." << endl;
    } else {
        cout << "Names are not equal." << endl;
    }

    // string as a array of characters

    string names[3];

    names[0] = "Rahul";
    names[1] = "Aman";
    names[2] = "Riya";

    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }



    return 0;
}