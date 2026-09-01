#include <iostream>
using namespace std;

int main() {
    // Variables are used to store data, so that we can use it later in the programing
    cout << "Variables in Cpp" << endl;

    int x = 5; // Integer variable
    float y = 5.99; // Floating point variable
    char z = 'D'; // Character variable

    // Mutiple variables can be declared in a single line
    float a , b ;
    a = 10; 
    b = 20; 

    // cout << x;
    // cout << "\n";

    cout << "Integer x = " << x << endl;
    cout << "Float y = " << y << endl;
    cout << "Character z = " << z << endl;

    cout<< "Multiplication of x and y is: " << x << " * " << y << " = " << x * y << endl;

    // We can also use C style printf function to print the output in Cpp
    printf("Multiplication of x and y is: %d * %2.f = %2.f\n", x, y, x * y);

    printf("division of a and b is:");
    cout << a / b << endl;


    // Updation of Variables in    

    cout << "Before updating the value of x: " << x << endl;

    x += 5; // x = x + 5
    cout << "After updating the value of x: " << x << endl;
    cout << "Again updating the value of x: " << x << endl;

    x = 15 ;

    cout << "After again updating the value of x: " << x << endl;   
    
    string str ;
    printf("Enter your name: ");
    getline(cin, str); // getline() function is used to read a line of text from the input stream
    cout << "My name is " << str << endl;


    // classes in cpp

    class School {
        
        public:
            string name;
            int age;
        
       
        // function inside class

        void display() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }

        void setDetails(string n, int a) {
            name = n;
            age = a;
        }

        void viewMarks(int marks) {
            cout << "Marks: " << marks << endl;
        }
    };

    School student1;
    student1.setDetails("John", 20);
    student1.display();
    student1.viewMarks(85);


    // write a program create a class bank and its data member is balance and display function to show the balance , put balance as private

    class Bank {
        private:
            float balance;

        public:
            void displayBalance() {
                cout << "Balance: $" << balance << endl;
            }

            void setBalance(float b) {
                balance = b;
            }
    };

    Bank account;
    account.setBalance(1000.50);
    account.displayBalance();

    // bubble short code , also calculate the number of swaps

    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    int n = sizeof(arr)/sizeof(arr[0]);
    int swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }

    cout << "Array after bubble sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Number of swaps: " << swaps << endl;

    // 


    return 0;

}