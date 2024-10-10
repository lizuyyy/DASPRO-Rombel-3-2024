// Di antara fungsi-fungsi berikut, mana sajakah (jika ada) yang merupakan implementasi fungsi rekursif faktorial yang ekuivalen dengan fungsi rekursif yang telah dibahas di atas?
// 1 
int faktorial(int n) {
    return faktorial(n);
}

// 2
int faktorial(int n) {
    int faktorial_sebelumnya = faktorial(n-1);

    if (n == 1) {
        return 1;
    } else {
        return faktorial_sebelumnya * n;
    }
}

// 3
int faktorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}

// 4
int faktorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return faktorial(n + 1) / (n + 1);
    }
}

//jawaban D karena selain pilihan ke tiga bukan merupakan implementasi fungsi rekursif faktorial yang ekuivalen dengan fungsi rekursif yang telah dibahas
