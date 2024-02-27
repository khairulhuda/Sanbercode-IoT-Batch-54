#include <stdio.h>

int main() {
    int angka1, angka2, hasil;

    // Meminta pengguna memasukkan dua angka
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    // Menjumlahkan dua angka
    hasil = angka1 + angka2;

    // Menampilkan hasil penjumlahan
    printf("Hasil penjumlahan: %d\n", hasil);

    return 0;
}
