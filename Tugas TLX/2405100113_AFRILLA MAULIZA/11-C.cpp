// pak Dengklek ingin membariskan N bebeknya kedalam sebuah formasi r baris dan c kolom, sedemikian hingga r <= c dan r x c = N. Tentukan pasangan nilai r dan c yang mungkin!
// jika ada lebih dari kemungkinan  pasangan, pilih pasangan yang memiliki selisih r dan c terkecil.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int r_terbaik = 1;
    int c_terbaik = N;

    for (int r = 1; r <= sqrt(N); r++) {
        if (N % r == 0) { // cek apakah r adalah faktor dari N
            int c = N / r; // hitung c
            if (r <= c) { // pastikan r <= c
                // cek jika selisihnya lebih kecil
                if ((c - r) < (c_terbaik - r_terbaik)) {
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        }
    }

    cout << r_terbaik << " " << c_terbaik << endl;
    return 0;
}
// kode ini bertujuan untuk menemukan pasangan (r,c) yang memenuhi syarat r x c = N dengan r <= c, serta selisih c - r yang terkecil, dalam waktu yang efisien.
