#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float length, width;
    cout << "Please enter the length of the rectangle: ";
    cin >> length;
    cout << "Please enter the width of the rectangle: ";
    cin >> width;
    float area = length * width;
    cout << "The area of the reactangle is " << fixed << setprecision(2)<< area;

    return 0;
}
