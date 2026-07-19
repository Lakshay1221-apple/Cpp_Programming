#include <iostream>
using namespace std;

void greet(){
    cout << "hello world" << endl;
}

void goodMorning() {
    greet();
    cout<< "Good Morning to all" << endl;
}
// main functions could not be called more then once 
int main () {

    
    goodMorning();

    return 0;
}
