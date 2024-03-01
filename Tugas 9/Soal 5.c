#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi string 1 dan string 2
    char string1[50] = "belajar";
    char string2[50] = "Bahasa C";

    // Menggabungkan string 1 dan string 2 menggunakan strcat
    strcat(string1, " ");
    strcat(string1, string2);

    // Menampilkan hasil penggabungan
    printf("Saya sedang %s\n", string1);

    return 0;
}

