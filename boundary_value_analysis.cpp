#include <iostream>
#include <string>

std::string kategori_umur(int umur) {
    if (umur < 0 || umur > 100) {
        return "Umur tidak valid";
    } else if (umur < 12) {
        return "Anak-anak";
    } else if (umur < 18) {
        return "Remaja";
    } else if (umur < 60) {
        return "Dewasa";
    } else {
        return "Lansia";
    }
}

int main() {
    // Menentukan test case berdasarkan boundary value analysis
    int test_cases[] = {-1, 0, 11, 12, 17, 18, 59, 60, 100, 101};
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    // Menjalankan pengujian
    for (int i = 0; i < num_test_cases; i++) {
        int umur = test_cases[i];
        std::string hasil = kategori_umur(umur);
        std::cout << "Input umur: " << umur << ", Hasil kategori: " << hasil << std::endl;
    }

    return 0;
}
