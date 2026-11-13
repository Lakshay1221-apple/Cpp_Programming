#include <iostream>
using namespace std;

class Base{
    public:
        int id{};

        Base(int id) : id{id} // member initializer list
        {
            cout << "Base class constructor called" << endl;
        }        
};

class Derived : public Base{
    public:
        int salary{};

        Derived(int id, int salary) : Base(id), salary{salary} // member initializer list
        {
            cout << "Derived class constructor called" << endl;
        }
};

int main (){
    
    Derived d1{1, 5000};
    cout << "id: " << d1.id << endl;
    cout << "salary: " << d1.salary << endl;

    return 0;
}