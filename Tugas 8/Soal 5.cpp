#include <stdio.h>

int i = 2; // Variabel eksternal i

void fungsi1(void) {
    // Menggunakan variabel eksternal i yang telah didefinisikan di luar fungsi ini
    i = 7; // Menetapkan nilai 7 ke variabel eksternal i
    printf("nilai i didalam fungsi1() = %d\n", i);
}

int main() {
    fungsi1(); // Memanggil fungsi1
    printf("nilai i didalam main() = %d\n", i); // Menggunakan variabel eksternal i
    return 0;
}
