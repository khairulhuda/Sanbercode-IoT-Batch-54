#include <stdio.h>

int i = 2; // Variabel global i

void fungsi1(void) {
    int i = 5; // Variabel lokal i di dalam fungsi1
    i = 10; // Menetapkan nilai 10 ke variabel lokal i di dalam fungsi1
    printf("nilai i didalam fungsi1() = %d\n", i);
}

int main() {
    fungsi1(); // Memanggil fungsi1
    printf("nilai i didalam main() = %d\n", i);
    return 0;
}
