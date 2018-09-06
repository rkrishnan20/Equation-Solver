#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Welcome to the Equation Solver! Enter one of the following equations that you want solved: Mechanics, Electricity/Magnetism.";
    cin >> userInput;
    
    if(userInput == "Mechanics")
    {
        mechanics();
    }
    else if(userInput == "Electricity/Magnetism")
    {
        eAndM();
    }
    else
    {
        cout << "That's not one of the options. Try again.";
        main();
    }
    return 0;
}

void mechanics()
{
    cout << "Would you like to solve for: Velocity, Acceleration, Force, Mass, Momentum, Kinetic Energy, or Gravitational Potential Energy?";
    cin >> answer;
}

void eAndM()
{
    cout << "Would you like to solve for: Charge, Voltage, Current, Resistance, Electric Field Strength, or Magnetic Field Strength?";
    cin >> userAnswer;
}

  
