#include <iostream>
#include <climits> // Included for INT_MIN
using namespace std;

int main() {
    // 1. Initialize an array with a maximum capacity to safely allow insertions
    const int MAX_CAPACITY = 100;
    int array[MAX_CAPACITY];
    int n;

    cout << "Enter the initial size of the array (max 100): ";
    cin >> n;

    // Boundary check
    if (n > MAX_CAPACITY || n <= 0) {
        cout << "Invalid size." << endl;
        return -1;
    }

    // 2. Read array elements (using 0-based indexing)
    cout << "Enter " << n << " array elements: ";
    int i = 0;
    while (i < n) {
        cin >> array[i];
        i++; 
    }
    
    // Print original array
    cout << "\nOriginal Array: ";
    for (int j = 0; j < n; j++) {
        cout << array[j] << " ";
    }
    cout << endl;

    // 3. Sum of array elements
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += array[j];
    }
    cout << "Sum of array elements: " << sum << endl;

    // 4. Find the Maximum and Minimum elements
    int max_val = array[0];
    int min_val = array[0];

    for (int j = 1; j < n; j++) {
        if (array[j] > max_val) {
            max_val = array[j];
        }
        if (array[j] < min_val) {
            min_val = array[j];
        }
    }
    cout << "The maximum element is: " << max_val << endl; 
    cout << "The minimum element is: " << min_val << endl;

    // 5. Find the Second Maximum element
    int second_max = INT_MIN; // Use minimum possible integer as initial fallback
    for (int j = 0; j < n; j++) {
        if (array[j] > second_max && array[j] < max_val) {
            second_max = array[j];
        }
    }
    if (second_max == INT_MIN) {
        cout << "No second maximum element exists (all elements might be equal)." << endl;
    } else {
        cout << "The second maximum element is: " << second_max << endl;
    }

    // 6. Count and print Odd elements
    int odd_count = 0;
    cout << "\nOdd elements: ";
    for (int j = 0; j < n; j++) {
        if (array[j] % 2 != 0) {
            odd_count++;
            cout << array[j] << " ";
        }
    }
    cout << "\nNumber of odd elements: " << odd_count << endl;

    // 7. Count and print Even elements
    int even_count = 0;
    cout << "Even elements: ";
    for (int j = 0; j < n; j++) {
        if (array[j] % 2 == 0) {
            even_count++;
            cout << array[j] << " ";
        }
    }
    cout << "\nNumber of even elements: " << even_count << endl;

    // 8. Insert element at the FIRST position (Right Shift)
    int new_element;
    cout << "\nEnter new element to insert at the first position: ";
    cin >> new_element;

    for (int j = n; j > 0; j--) {
        array[j] = array[j - 1]; // Shift right
    }
    array[0] = new_element;
    n++; // Increment array size

    cout << "Array after inserting at first position: ";
    for (int j = 0; j < n; j++) {
        cout << array[j] << " ";
    }
    cout << endl;

    // 9. Insert element at the LAST position
    int last_element;
    cout << "\nEnter new element to insert at the last position: ";
    cin >> last_element;    

    array[n] = last_element; // Simply place at the end
    n++; // Increment array size

    cout << "Array after inserting at last position: ";
    for (int j = 0; j < n; j++) {
        cout << array[j] << " ";
    }
    cout << endl;

    // 10. Insert element at a SPECIFIC position (1-based index provided by user)
    int position, specific_element;
    cout << "\nEnter position (1 to " << n + 1 << ") to insert new element: ";
    cin >> position;
    cout << "Enter the new element for position " << position << ": ";
    cin >> specific_element;   
    
    // Shift elements to the right from the specified position
    for (int j = n; j >= position; j--) {
        array[j] = array[j - 1]; 
    }
    array[position - 1] = specific_element; // Insert at 0-based index
    n++; // Increment array size

    cout << "Array after insertion at position " << position << ": ";
    for (int j = 0; j < n; j++) {
        cout << array[j] << " ";
    }
    cout << endl;

    // 11. Delete the FIRST element (Left Shift)
    if (n > 0) {
        int deleted = array[0];
        for (int j = 0; j < n - 1; j++) {
            array[j] = array[j + 1]; // Shift left
        }
        n--; // Decrement array size
        
        cout << "\nArray after deleting the first element (" << deleted << "): ";
        for (int j = 0; j < n; j++) {
            cout << array[j] << " ";
        }
        cout << endl;
    }

    // 12. Reverse an array from a specific 0-based position to the end
    int reverse_start = 2; // Example: reverse starting from index 2
    if (reverse_start < n) {
        int left = reverse_start;
        int right = n - 1;
        
        while (left < right) {
            // Swap elements
            int temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            
            left++;
            right--;
        }

        cout << "\nArray after reversing from index " << reverse_start << " to the end: ";
        for (int j = 0; j < n; j++) {
            cout << array[j] << " ";
        }
        cout << endl;
    }

    // removing duplicates from the array
    int new_size = 0;
    for (int j = 0; j < n; j++) {
        bool is_duplicate = false;
        for (int k = 0; k < new_size; k++) {
            if (array[j] == array[k]) {
                is_duplicate = true;
                break;
            }
        }
        if (!is_duplicate) {
            array[new_size] = array[j];
            new_size++;
        }
    }

    n = new_size; // Update the array size to the new size without duplicates
    

    return 0;
}