#include <iostream>
using namespace std;

// Base class (parent class)
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

// Intermediate class (child class of Animal)
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

// Derived class (child class of Dog)
class Rottweiler : public Dog
{
public:
    void guard()
    {
        cout << "Rottweiler  is guarding." << endl;
    }
};

int main()
{
    // Create an instance of the derived class
    Rottweiler myRottweiler;

    // Call inherited member functions from the base class
    myRottweiler.eat();
    myRottweiler.sleep();

    // Call inherited member function from the intermediate class
    myRottweiler.bark();

    // Call member function from the derived class
    myRottweiler.guard();

    return 0;
}
