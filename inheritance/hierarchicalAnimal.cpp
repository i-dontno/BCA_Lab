#include <iostream>
using namespace std;

// Base class
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

// First derived class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

// Second derived class
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing." << endl;
    }
};

int main()
{
    Dog myDog;
    Cat myCat;

    // Access members of the Dog class
    myDog.eat();
    myDog.sleep();
    myDog.bark();

    // Access members of the Cat class
    myCat.eat();
    myCat.sleep();
    myCat.meow();

    return 0;
}
