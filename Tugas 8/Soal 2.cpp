#include <stdio.h>

// Deklarasi fungsi jumlah
int jumlah(int a, int b) {
    return a + b;
}

int main() {
    int hasil;

    // Memanggil fungsi jumlah
    hasil = jumlah(5, 10);

    // Menampilkan hasil penjumlahan
    printf("Hasil penjumlahannya adalah %d\n", hasil);

    return 0;
}
