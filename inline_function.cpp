#include <iostream>
using namespace std;

// inline int add(int a , int b){
//     return a + b;
// }

class square{ // function defined inside the class is inline by default 

    public:
    int squaree(int a){
        return a * a;
    }

    int add(int a , int b);
};

inline int square::add(int a , int b){
    return a + b;
}

int main () {
    // cout << add(2 , 10) << endl;
    square s;

    cout << s.squaree(10) << endl;
    return 0;
}