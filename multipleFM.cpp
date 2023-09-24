#include <iostream>
using namespace std;

// First base class
class Father
{
public:
    void exercise()
    {
        cout << "Father is exercising to stay fit." << endl;
    }
};

// Second base class
class Mother
{
public:
    void study()
    {
        cout << "Mother is studying to gain knowledge." << endl;
    }
};

// Derived class inheriting from both Father and Mother
class Child : public Father, public Mother
{
public:
    void play()
    {
        cout << "Child is playing and having fun." << endl;
    }

    void displayTraits()
    {
        cout << "The child inherits physical fitness and intelligence from parents." << endl;
    }
};

int main()
{
    Child child;

    // Access member functions from both parent classes
    child.exercise();
    child.study();

    // Access member function from the Child class
    child.play();

    // Display traits inherited from parents
    child.displayTraits();

    return 0;
}
