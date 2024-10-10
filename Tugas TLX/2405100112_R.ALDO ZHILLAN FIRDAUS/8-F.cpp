// Lengkapilah fungsi kalkulator() di sebelah kanan, yang menerima sebuah char op dan vector<string> data, agar mengembalikan:

//     jumlah seluruh elemen data, apabila op adalah +,
//     perkalian seluruh elemen data, apabila op adalah *,
//     sebuah string KESALAHAN, apabila op adalah karakter lainnya.

// Akan tetapi, elemen-elemen data berupa string! Jadi, kita perlu mengubah setiap string menjadi bilangan terlebih dahulu, lalu hasilnya diubah kembali menjadi string sebelum nilainya dikembalikan.


}#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+') {
        long long sum = 0;
        for (string s : data) {
            sum += stoll(s); // Konversi string ke long long untuk menghindari overflow
        }
        return to_string(sum); // Konversi hasil penjumlahan kembali ke string
    } 
    else if (op == '*') {
        long long product = 1;
        for (string s : data) {
            product *= stoll(s); // Konversi string ke long long untuk menghindari overflow
        }
        return to_string(product); // Konversi hasil perkalian kembali ke string
    } 
    else {
        return "KESALAHAN"; // Operator tidak valid
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;                                                                                                      
} 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+') {
        long long sum = 0;
        for (string s : data) {
            sum += stoll(s); // Konversi string ke long long untuk menghindari overflow
        }
        return to_string(sum); // Konversi hasil penjumlahan kembali ke string
    } 
    else if (op == '*') {
        long long product = 1;
        for (string s : data) {
            product *= stoll(s); // Konversi string ke long long untuk menghindari overflow
        }
        return to_string(product); // Konversi hasil perkalian kembali ke string
    } 
    else {
        return "KESALAHAN"; // Operator tidak valid
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}

// Program ini menghitung penjumlahan atau perkalian dari angka-angka dalam bentuk vector<string>, dengan hasil dikembalikan sebagai string.
