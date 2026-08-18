#include <iostream>
using namespace std;
 
int main() {

    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    int array[n];

    cout << "Enter array elements: ";

    // for (int i = 0; i < n; i++){
    //     cin >> array[i];
    // }

    int i = 1;
    while (i <= n) {
        cin >> array[i];
        i++; 
    }
    
    for (i = 1 ; i <= n; i++) {
        cout << array[i] << " " << endl;
    }

    int sum = 0;

    for (i = 1 ; i <= n; i++) {
        sum += array[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    int max = array[0];

    for (i = 1 ; i <= n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    cout << "The maximum element in the array is: " << max << endl; 

    int second_max = array[0];

    for (int i = 1; i <= n; i++) {
        if (array[i] > second_max && array[i] < max) {
            second_max = array[i];
        }
    }

    cout << "The second maximum element in the array is: " << second_max << endl;

    int min = array[0];
    
    for (i = 1 ; i <= n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    int odd_count =0;


    for (int i = 1; i <= n ; i++){
        if ( array[i] % 2 != 0){
            odd_count++;
        }
            cout << array[i] << " ";
        }
    }

    cout << "\nNumber of odd elements: " << odd_count << endl;
    int even_count = 0;

     for (int i = 1; i <= n ; i++){
        if ( array[i] % 2 == 0){
            even_count++;
            cout << array[i] << " ";
        }
    }
o

    cout << "\nNumber of even elements: " << even_count << endl;

    // right shift of array elements, user input inserted in the first position and all element shifted to n + 1 position without removing the last element

    int new_element;
    cout << "Enter the new element to be inserted at the first position: ";
    cin >> new_element;

    // Shift elements one step to the right
    for (int i = n; i > 0; i--) {
        array[i] = array[i - 1]; // Shift elements to the right
    }

    // Insert at first position
    array[0] = new_element;

    cout << "\nArray after insertion at the first position: ";
    for (int i = 0; i <= n; i++) {
        cout << array[i] << " ";
    }

    return 0;


   
