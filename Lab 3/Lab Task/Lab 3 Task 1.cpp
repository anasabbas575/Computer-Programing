// Name: Anus Abbas Khan
// Department: Electrical Engineering (power)
// Registration No: BF25NWELE0723
// Section: A

#include <iostream>   // Library for input and output
using namespace std;  // Allows use of cout and cin without std::

int main() {

    double voltage, current, resistance;  
    // Declare variables to store voltage, current and resistance

    cout << "Enter voltage (V): ";  
    // Ask user to enter voltage
    cin >> voltage;  
    // Take voltage input from user

    cout << "Enter current (I): ";  
    // Ask user to enter current
    cin >> current;  
    // Take current input from user

    resistance = voltage / current;  
    // Apply Ohm's Law formula: R = V / I

    cout << "Voltage: " << voltage << " V" << endl;  
    // Display voltage value

    cout << "Current: " << current << " A" << endl;  
    // Display current value

    cout << "Resistance: " << resistance << " Ohms" << endl;  
    // Display calculated resistance

    return 0;  
    // Indicates successful execution of program
}
