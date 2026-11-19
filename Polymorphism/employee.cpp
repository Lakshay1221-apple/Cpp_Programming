#include <iostream>
using namespace std;

class Employee {

    protected:
        string name;
        int id;

    public:

    Employee(string n, int id){
        name = n;
        id = id;
    }

    virtual void display() {
        cout << "name: " << name << " id: " << id << endl;
    }
};

class Developer : public Employee {

    protected:
        string programmingLanguage;

    public:

    Developer(string n, int id, string pl) : Employee(n, id){
        programmingLanguage = pl;
    }


    void display() override{        
        cout << "Developer Details: " << endl;
        cout << "name: " << name << " id: " << id << " programmingLanguage: " << programmingLanguage << endl;
    }
};

class Manager : public Employee {

    protected:
        int teamSize;

    public:
    Manager(string n, int id, int ts) : Employee(n, id){
        teamSize = ts;
    }

    void display() override{
        cout << "Manager Details: " << endl;
        cout << "name: " << name << " id: " << id << " teamSize: " << teamSize << endl;
    }
};

int main() {
    Employee* emp1 = new Developer("Alice", 101, "C++");
    Employee* emp2 = new Manager("Bob", 102, 5);

    emp1->display();
    emp2->display();

    delete emp1;
    delete emp2;

    return 0;
}