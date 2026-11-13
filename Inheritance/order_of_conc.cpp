#include <iostream>
using namespace std;

// whenever a derived class is created, the base class constructor is called first and then the derived class constructor is called. This is the order of construction of classes in inheritance.
// this starts with the construction of the most base class , following the child class until the most child class is constructed 


class A{
    public :
    A()
    {
        cout << "Constructor of A" << endl;
    }
};

class B : public A{
    public :
    B()
    {
        cout << "Constructor of B" << endl;
    }
};

class C : public B{
    public :
    C()
    {
        cout << "Constructor of C" << endl;
    }
};

class D : public C{
    public :
    D()
    {
        cout << "Constructor of D" << endl;
    }
};

class E : public D{
    public :
    E()
    {
        cout << "Constructor of E" << endl;
    }
};

int main (){

    cout << "Constructing A" << endl;
    A a1;

    cout << endl;

    cout << "Constructing B" << endl;   
    B b1;

    cout << endl;

    cout << "Constructing C" << endl;
    C c1;

    cout << endl;

    cout << "Constructing D" << endl;
    D d1;

    cout << endl;

    cout << "Constructing E" << endl;
    E e1;   

    return 0;
}