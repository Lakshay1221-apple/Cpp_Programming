#include <iostream>
using namespace std;

int main(){

    cout << "stack memeory" << endl;
    int d = 10;

    cout << endl;

    cout << "heap memory" << endl;
    int* ptr = new int; // new int add the memory in heap dynamically and return the address of that memory
    *ptr = 20;

    cout << "value of d: " << d << endl;
    cout << "value of ptr: " << *ptr << endl;

    cout << "deleting ptr" << endl;
    delete ptr; // releasing the memory allocated in heap
    ptr = nullptr;

    // for array 
    cout << "for array" << endl;
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    arr = nullptr;

    // Failure case 

    int* ptr1 = new(nothrow) int (1000);

    if(ptr1 == nullptr){
        cout << "Memory allocation failed" << endl;
    } else {
        cout << "Memory allocation successful" << endl;
        cout << "Value of ptr1: " << *ptr1 << endl;
    }

    delete ptr1;
    ptr1 = nullptr;

    // sum and average 

    int m;
    cin >> m;

    int* ptr3  = new(nothrow) int[m];

    int sum = 0;
    int average = 0;

    if(ptr3 == nullptr){
        cout << "Memory allocation failed" << endl;
    } else {
        cout << "Memory allocation successful" << endl;           
        cout << "Enter elements: " << endl;

    for(int i = 0; i < m; i++){
        cin >> ptr3[i];
        sum += ptr3[i];
    }

    average = sum / m;
    };

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    delete[] ptr3;
    ptr3 = nullptr;

    return 0;
}