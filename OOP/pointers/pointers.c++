#include <iostream>

using namespace std;

int findMax(int* a, int* b) {
    if (*a > *b) {
        return *a;
    }
    return *b;
}

int mySwap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "After swapping: a = " << *a << ", b = " << *b << endl;

    return 0;
}

int computeStats(int* a, int* b) {
    int sum = *a + *b;
    int average = sum / 2;
    cout << "Sum: " << sum << ", Average: " << average << endl;
    return 0;
}

int add_multiply(int* a) {
    *a = *a + 10;
    *a = *a * 2;

    cout << "After adding 10 and multiplying by 2: " << *a << endl;

    return 0;
}

int pointer_Arthematics(int*  a){

    cout << "Initial address: " << a << ", value: " << *a << "\n";

    a++;
    cout << "After incrementing the pointer: " << a << ", value: " << *a << "\n";

    a--;
    cout << "After decrementing the pointer: " << a << ", value: " << *a << "\n";

    a += 2;
    cout << "After adding 2 to the pointer: " << a << ", value: " << *a << "\n";

    return 0;
}
int main() {

    int num_1 = 5 ;
    int num_2 = 10;

    int* ptr_1 = &num_1;

    cout << "Value of num_1: " << *ptr_1 << endl;
    cout << "Address of num_1: " << ptr_1 << endl;
    cout << "Address of num_1 using & operator: " << &num_1 << endl;

    cout << "The maximum value is: " << findMax(&num_1, &num_2) << endl;


    cout << "Before swapping: num_1 = " << num_1 << ", num_2 = " << num_2 << endl;
    mySwap(&num_1, &num_2); 
    
    return 0;
}