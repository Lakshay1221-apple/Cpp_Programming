
#include <iostream>
#include <string>
using namespace std;

class Shape {
    public:
        Shape() = default;

        Shape(const string& description) {
            m_description = description;
        }

    virtual void draw() {
        cout << "Drawing a shape: "
             << m_description << endl;
    }

    virtual ~Shape() = default;

    protected:
        string m_description;
};

class Oval : public Shape {
    public:
        Oval(double X_radius, double Y_radius,
            const string& description)
         : Shape(description),
             m_X_radius(X_radius),
             m_Y_radius(Y_radius)
    {
    }

    void draw() override {
        cout << "Drawing an Oval with X radius: "
             << m_X_radius
             << " and Y radius: "
             << m_Y_radius
             << " and description: "
             << m_description << endl;
    }

    private:
     double m_X_radius;
     double m_Y_radius;
};

int main() {

    string description = "This is a shape";

    Oval oval(5.0, 3.0, description);

    Shape* ptr = &oval;

    ptr->draw();

    return 0;
}
