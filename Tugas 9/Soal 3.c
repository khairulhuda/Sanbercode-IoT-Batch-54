#include <stdio.h>

// Deklarasi fungsi perkalian elemen array
int perkalianArray(int arr[], int n) {
    int hasil = 1;
    for (int i = 0; i < n; i++) {
        hasil *= arr[i];
    }
    return hasil;
}

int main() {
    int nilai[3] = {2, 5, 1};

    // Memanggil fungsi perkalianArray dan menampilkan hasilnya
    printf("%d\n", perkalianArray(nilai, 3));

    return 0;
}
