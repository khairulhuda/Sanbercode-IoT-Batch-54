#include <stdio.h>

// Mendefinisikan struktur Student
struct Student {
    char name[51]; // Maksimal 50 karakter + 1 untuk null-terminator
    int score;
};

// Fungsi untuk mencetak informasi mahasiswa
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Score: %d\n", s.score);
}

int main() {
    // Mendeklarasikan variabel student1 dari tipe Student dan menginisialisasinya
    struct Student student1;
    strcpy(student1.name, "John Doe");
    student1.score = 85;

    // Memanggil fungsi printStudent untuk menampilkan informasi mahasiswa
    printStudent(student1);

    return 0;
}
