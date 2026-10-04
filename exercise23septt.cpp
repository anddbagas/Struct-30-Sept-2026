#include <iostream>
#include <string>
using namespace std;

// 1. Membuat cetakan struct
struct Mahasiswa {
    string nama;
    int nilai;
    string kelas;
};

int main() {
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    // Membaca sisa newline setelah cin >> n agar getline bekerja dengan benar
    cin.ignore(); 

    Mahasiswa mhs[999];

    // Input Data
    for (int i = 0; i < n; i++) {
        cout << "\n--- Data Mahasiswa ke-" << i + 1 << " ---" << endl;
        
        cout << "Nama       : ";
        getline(cin, mhs[i].nama); // Memakai getline agar bisa baca nama dengan spasi
        
        cout << "Kelas      : ";
        getline(cin, mhs[i].kelas);
        
        cout << "Nilai      : ";
        cin >> mhs[i].nilai;
        
        cin.ignore(); // Membersihkan buffer setelah input angka
    }

    // Output Data
    cout << "\n===================================" << endl;
    cout << "          DATA MAHASISWA           " << endl;
    cout << "===================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Nama  : " << mhs[i].nama << endl;
        cout << "   Kelas : " << mhs[i].kelas << endl;
        cout << "   Nilai : " << mhs[i].nilai << endl;
        cout << "-----------------------------------" << endl;
    }

    return 0;
}