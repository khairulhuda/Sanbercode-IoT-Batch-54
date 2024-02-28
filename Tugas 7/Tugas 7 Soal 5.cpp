#include <iostream>
using namespace std;

int main() {
    int i = 5;
loop:
    cout << i << endl;
    i--;
    if (i >= 1)
        goto loop;

    return 0;
}
