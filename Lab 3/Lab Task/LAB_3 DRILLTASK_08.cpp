// Name: Shahzad faisal
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0733
// Section: A

#include <iostream>   // Input (cin) aur Output (cout) ke liye library
#include <cmath>      // sqrt() function use karne ke liye math library
using namespace std;  // std namespace use karne ke liye

int main()
{
    // Variables declare kiye coefficients aur roots store karne ke liye
    float a, b, c, root1, root2, D;

    // User se coefficient 'a' input lene ke liye
    cout << "Enter coefficient a: ";
    cin >> a;

    // User se coefficient 'b' input lene ke liye
    cout << "Enter coefficient b: ";
    cin >> b;

    // User se coefficient 'c' input lene ke liye
    cout << "Enter coefficient c: ";
    cin >> c;

    // Discriminant (D) calculate karna
    // Formula: D = b² − 4ac
    D = b*b - 4*a*c;

    // Quadratic formula use karke pehla root calculate karna
    // root1 = (-b + √D) / (2a)
    root1 = (-b + sqrt(D)) / (2*a);

    // Quadratic formula use karke doosra root calculate karna
    // root2 = (-b − √D) / (2a)
    root2 = (-b - sqrt(D)) / (2*a);

    // Dono roots display karna
    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;

    return 0;   // Program successfully end hone ka signal
}