#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    while(i <= 100){
        i++;
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
    return 0;
}
