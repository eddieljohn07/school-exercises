#include <iostream>
using namespace std;

int main()
{
    int x = 1, y;
     while (x <= 5) {
        y = 1;
        while (y <= x) {
            cout << "*";
            y++;
        }
        cout << endl;
        x++;
    }
    return 0;

}
