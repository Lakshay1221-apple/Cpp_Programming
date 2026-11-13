#include <iostream>
using namespace std;

class person{

    private:
        string gender = "male";

    public:

        string getGender(){
            return gender;
        }

        string name;
        int age;

        void display(){
            cout << "name: " << name << "age: " << age << "gender" << gender << endl;
        }
};
class BaseballPLayer : virtual public person{
    public:
        string team_name;
        int batting_average;

    void display(){
        cout << "name: " << name << "age: " << age << "team_name: " << team_name << "batting_average: " << batting_average << "gender"<< getGender() << endl;
    }    
};

class Employee : virtual public person{

    public: 
        int id;
        double salary;
        string companyName;

    void display() {
        cout << "name: " << name << "age: " << age << "id: " << id << "salary: " << salary << "companyName: " << companyName << endl;
    }
};

class employeeBaseBallPlayer : public BaseballPLayer, public Employee{

    public:

    void display() {
    cout << "name: " << name << "age: " << age << "team_name: " << BaseballPLayer::team_name << "batting_average: " << BaseballPLayer::batting_average << "id: " << Employee::id << "salary: " << Employee::salary << "companyName: " << Employee::companyName << endl;
    };
};

int main(){

    cout << "Details from the Baseball Player  class" << endl;

    BaseballPLayer play1;
    play1.name = "Lakshay";
    play1.age = 20;
    play1.team_name = "India";
    play1.batting_average = 100;

    play1.display();

    cout << endl;


    cout << "Details from the employee class" << endl;

    Employee emp1;

    emp1.name = "Bob";
    emp1.age = 30;
    emp1.id = 101;
    emp1.salary = 75000.0;
    emp1.companyName = "Google";

    emp1.display();

    cout << endl;

    cout << "Employee Baseball Player Details" << endl;

    employeeBaseBallPlayer ebp1;

    ebp1.name = "Alice";
    ebp1.age = 25;
    ebp1.team_name = "USA";
    ebp1.batting_average = 80;
    ebp1.id = 102;
    ebp1.salary = 80000.0;
    ebp1.companyName = "Microsoft";

    ebp1.display();

    return 0;

    return 0;
}