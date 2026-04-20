// Name: Anus Abbas Khan
// Department: Electrical Engineering (power)
// Registration No: BF25NWELE0723
// Section: A

#include <iostream>   // Input aur output (cin, cout) ke liye library
#include <cmath>      // sqrt() function use karne ke liye math library
using namespace std;  // std namespace use karne ke liye

int main()
{
    // Teen float type variables declare kiye
    float base, perpendicular, hypotenuse;

    // User se base ki value input lene ke liye message show karega
    cout << "Enter base: ";
    cin >> base;   // User se base ki value input lega

    // User se perpendicular ki value input lene ke liye message show karega
    cout << "Enter perpendicular: ";
    cin >> perpendicular;   // User se perpendicular ki value input lega

    // Pythagoras theorem use karke hypotenuse calculate karega
    // Formula: hypotenuse = √(base² + perpendicular²)
    hypotenuse = sqrt(base*base + perpendicular*perpendicular);

    // Calculated hypotenuse display karega
    cout << "Hypotenuse = " << hypotenuse << endl;

    return 0;   // Program successfully end hone ka signal
}
