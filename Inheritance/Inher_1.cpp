#include <iostream>
using namespace std;

class person{
    public:
        string name;
        int age;

        void display(){
            cout << "name: " << name << "age: " << age << endl;
        }
};


class BaseballPLayer : public person{
    public:
        string team_name;
        int batting_average;

    void display(){
        cout << "name: " << name << "age: " << age << "team_name: " << team_name << "batting_average: " << batting_average << endl;
    }    
};

int main(){

    BaseballPLayer play1;
    play1.name = "Lakshay";
    play1.age = 20;
    play1.team_name = "India";
    play1.batting_average = 100;

    play1.display();
}