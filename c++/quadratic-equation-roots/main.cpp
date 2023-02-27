#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Get The Roots of a Quadratic Equation!" << endl;
    float x1, x2, x;
    int a, b, c;
    cout << "Enter the value of coefficeint x^2 (a): ";
    cin >> b;
    cout << "Enter the value of coefficeint x (b): ";
    cin >> b;
    cout << "Enter the value of coefficeint (c): ";
    cin >> c;
    float discriminant = b * b - 4 * a * c;
    return 0;
}
