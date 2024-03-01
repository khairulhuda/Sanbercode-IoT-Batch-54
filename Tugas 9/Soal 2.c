#include <stdio.h>

int main() {
    int bil[2][5] = {{1, 2, 3, 4, 5}, {10, 9, 8, 7, 6}};

    // Menampilkan elemen array dengan indeks baris 0 dan kolom 4
    printf("%d\n", bil[0][4]);

    // Menampilkan elemen array dengan indeks baris 1 dan kolom 0
    printf("%d\n", bil[1][0]);

    return 0;
}
