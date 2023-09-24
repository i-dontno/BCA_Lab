#include <iostream>
using namespace std;

// First base class
class Mathematics
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }
};

// Second base class
class Physics
{
public:
    double calculateSpeed(double distance, double time)
    {
        return distance / time;
    }

    double calculateDistance(double speed, double time)
    {
        return speed * time;
    }
};

// Derived class inheriting from both Mathematics and Physics
class ScienceCalculator : public Mathematics, public Physics
{
public:
    void calculateAndDisplay()
    {
        int sum = add(5, 3);
        int difference = subtract(10, 4);
        double speed = calculateSpeed(100.0, 2.0);
        double distance = calculateDistance(50.0, 3.0);

        cout << "Sum: " << sum << endl;
        cout << "Difference: " << difference << endl;
        cout << "Speed: " << speed << " m/s" << endl;
        cout << "Distance: " << distance << " meters" << endl;
    }
};

int main()
{
    ScienceCalculator calculator;

    // Access member functions from both Mathematics and Physics classes
    calculator.calculateAndDisplay();

    return 0;
}
