#include <stdio.h>
#include <string.h>

// Mendefinisikan struktur Student
struct Student {
    char name[51]; // Maksimal 50 karakter + 1 untuk null-terminator
    int age;
};

int main() {
    // Membuat variabel student1 dari tipe Student dan menginisialisasinya
    struct Student student1;
    strcpy(student1.name, "John Doe");
    student1.age = 20;

    // Mencetak informasi mahasiswa
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    return 0;
}
