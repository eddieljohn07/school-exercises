#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    cout << "Get The Roots of a Quadratic Equation!" << endl;
    float x1, x2, x;
    int a, b, c;
    cout << "Enter the value of coefficeint x^2 (a): ";
    cin >> a;
    cout << "Enter the value of coefficeint x (b): ";
    cin >> b;
    cout << "Enter the value of coefficeint (c): ";
    cin >> c;
    float discriminant = b * b - 4 * a * c;
    if (discriminant > 0){
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "The roots are: " << fixed << setprecision(2) << x1 << "and " << fixed << setprecision(2) << x2;
        //cout("The roots are: " + to_string(x1) + "and" + to_string(x2));
    } else if (discriminant == 0){
        x = -b / (2 *a);
        cout << "The root is: " << x;
    } else{
        cout << "There is no real root.";
    }
    return 0;
}
