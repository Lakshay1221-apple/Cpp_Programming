#include <iostream>
using namespace std;

class Base{
    
    private:
        int id{};

    public:
        int getId() const;

        Base(int id) : id{id} // member initializer list
        {
            cout << "Base class constructor called" << endl;
        }  
        
        int getId() const {
            return id;
        }
};

class Derived : public Base{

    private:
        int salary{};

    public:       

        Derived(int id, int salary) : Base(id), salary{salary} // member initializer list
        {
            cout << "Derived class constructor called" << endl;
        }

        int getSalary() const {
            return salary;
        }
};

int main (){
    
    Derived d1{1, 5000};
    cout << "id: " << d1.getId() << endl;
    cout << "salary: " << d1.getSalary() << endl;

    return 0;
}