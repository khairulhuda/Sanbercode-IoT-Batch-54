#include <stdio.h>

// Definisi struktur tanggal
struct tanggal {
    int hari;
    int bulan;
    int tahun;
};

// Fungsi untuk mencetak tanggal
void printtanggal(struct tanggal d) {
    printf("%d/%d/%d\n", d.hari, d.bulan, d.tahun);
}

int main() {
    // Inisialisasi struktur tanggal
    struct tanggal now = {13, 10, 2023};

    // Menampilkan tanggal menggunakan fungsi printtanggal
    printtanggal(now);

    return 0;
}
