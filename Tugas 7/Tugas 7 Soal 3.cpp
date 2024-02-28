#include <iostream>
using namespace std;

int main() {
    cout << "Bilangan ganjil dari 5 sampai 15:" << endl;
    int i = 5;
    do {
        cout << i << endl;
        i += 2;
    } while (i <= 15);
    return 0;
}
