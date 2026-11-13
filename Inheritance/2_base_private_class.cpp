#include <iostream>
using namespace std;

class Animal{

    private:
        string type;
        int count;
    
    public:
        Animal(string type, int count) : type{type}, count{count} // member initializer list
        {
            cout << "Animal class constructor called" << endl;
        }

        string getType() const {
            return type;
        }

        int getCount() const {
            return count;
        }

};


class Dog : public Animal{

    private:
        string breed;

    public:
        Dog(string type, int count , string breed) : Animal(type, count), breed{breed}  // member initializer list
        {
            cout << "Dog class constructor called" << endl;
        }
        string getBreed() const {
            return breed;   
        }
};

int main (){
    
    Dog d1{"Mammal", 4, "Labrador"};
    cout << "type: " << d1.getType() << endl;
    cout << "count: " << d1.getCount() << endl;
    cout << "breed: " << d1.getBreed() << endl;

    return 0;
}