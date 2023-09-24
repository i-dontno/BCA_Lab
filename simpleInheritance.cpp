#include <iostream>
using namespace std;

// Base class (parent class) or super class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }

    void sleep()
    {
        cout << "Animal is sleeping." << endl;
    }
};

// Derived class (child class) or inherited class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

int main()
{
    // Create an instance of the derived class
    Dog myDog;

    // Call inherited member functions from the base class
    myDog.eat();
    myDog.sleep();

    // Call member function from the derived class
    myDog.bark();

    return 0;
}
