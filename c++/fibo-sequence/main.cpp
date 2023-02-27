#include <iostream>

using namespace std;

int main()
{
    int num = 20;
    int a = 0, b = 1;
    cout << a << ", ";
    cout << b << ", ";
    while (num > 2) {
        int c = a + b;
        cout << c << ", ";
        a = b;
        b = c;
        num--;
    }
    return 0;
}
