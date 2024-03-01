#include <stdio.h>
#include <string.h>

// Mendefinisikan struktur Car
struct Car {
    char brand[50];
    char model[50];
    int year;
};

int main() {
    // Mendeklarasikan variabel bertipe Car
    struct Car gabung;

    // Mengisi nilai-nilai pada variabel gabung
    strcpy(gabung.brand, "BMW");
    strcpy(gabung.model, "X5");
    gabung.year = 1999;

    // Menampilkan nilai-nilai pada variabel gabung
    printf("Brand: %s\n", gabung.brand);
    printf("Model: %s\n", gabung.model);
    printf("Tahun: %d\n", gabung.year);

    return 0;
}
