#include <iostream>
using namespace std;

int main() {
    cout << "Bilangan genap dari 4 sampai 14:" << endl;
    for (int i = 4; i <= 14; i += 2) {
        if (i == 6) {
            // Menggunakan continue untuk mengabaikan angka 6
            continue;
        }
        cout << i << endl;
        if (i == 10) {
            // Menggunakan break untuk menghentikan tampilan setelah angka 10
            break;
        }
    }
    return 0;
}
