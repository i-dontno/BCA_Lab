#include <iostream>
using namespace std;

// First base class
class Shape
{
public:
    void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

// Second base class
class Color
{
public:
    void fill()
    {
        cout << "Filling with color." << endl;
    }
};

// Derived class inheriting from both Shape and Color
class ColoredShape : public Shape, public Color
{
public:
    void display()
    {
        cout << "A colored shape." << endl;
    }
};

int main()
{
    ColoredShape coloredObject;

    // Access members from the Shape class
    coloredObject.draw();

    // Access members from the Color class
    coloredObject.fill();

    // Access members from the ColoredShape class
    coloredObject.display();

    return 0;
}
