#include <iostream>
#include <string>

using namespace std;

// Definisi Struct
struct Mahasiswa {
    string nim;
    string nama;
    float persentaseKehadiran;
};

int main() {
    // Array of Struct (40 Mahasiswa)
    Mahasiswa mahasiswa[40] = {
        {"103012400196", "ZHAFRAN LINKY SISWARA", 100.0},
        {"103012400278", "GANDA SETYA RAMADHANA", 50.0},
        {"103012233940", "RAFLI NUJJIYA MAULANA", 50.0},
        {"103012400004", "MHS_04", 80.0}, {"103012400005", "MHS_05", 90.0},
        {"103012400006", "MHS_06", 85.0}, {"103012400007", "MHS_07", 75.0},
        {"103012400008", "MHS_08", 95.0}, {"103012400009", "MHS_09", 100.0},
        {"103012400010", "MHS_10", 80.0}, {"103012400011", "MHS_11", 70.0},
        {"103012400012", "MHS_12", 85.0}, {"103012400013", "MHS_13", 90.0},
        {"103012400014", "MHS_14", 100.0}, {"103012400015", "MHS_15", 60.0},
        {"103012400016", "MHS_16", 75.0}, {"103012400017", "MHS_17", 80.0},
        {"103012400018", "MHS_18", 85.0}, {"103012400019", "MHS_19", 90.0},
        {"103012400020", "MHS_20", 95.0}, {"103012400021", "MHS_21", 100.0},
        {"103012400022", "MHS_22", 85.0}, {"103012400023", "MHS_23", 75.0},
        {"103012400024", "MHS_24", 80.0}, {"103012400025", "MHS_25", 90.0},
        {"103012400026", "MHS_26", 65.0}, {"103012400027", "MHS_27", 70.0},
        {"103012400028", "MHS_28", 85.0}, {"103012400029", "MHS_29", 90.0},
        {"103012400030", "MHS_30", 95.0}, {"103012400031", "MHS_31", 80.0},
        {"103012400032", "MHS_32", 75.0}, {"103012400033", "MHS_33", 85.0},
        {"103012400034", "MHS_34", 90.0}, {"103012400035", "MHS_35", 100.0},
        {"103012400036", "MHS_36", 60.0}, {"103012400037", "MHS_37", 70.0},
        {"103012400038", "MHS_38", 80.0}, {"103012400039", "MHS_39", 85.0},
        {"103012400040", "MHS_40", 90.0}
    };

    // 1. Traversal / Tampilkan Seluruh Data
    cout << "=== DAFTAR MAHASISWA ===" << endl;
    for (int i = 0; i < 40; i++) {
        cout << (i + 1) << ". " << mahasiswa[i].nim << " | " << mahasiswa[i].nama 
             << " | " << mahasiswa[i].persentaseKehadiran << "%" << endl;
    }
    cout << "Total Mahasiswa: 40\n" << endl;

    // 2. Searching berdasarkan NIM
    string cariNIM = "103012400278";
    int foundIdx = -1;

    cout << "=== PENCARIAN MAHASISWA ===" << endl;
    cout << "Cari NIM: " << cariNIM << endl;
    for (int i = 0; i < 40; i++) {
        if (mahasiswa[i].nim == cariNIM) {
            foundIdx = i;
            break;
        }
    }

    if (foundIdx != -1) {
        cout << "Data Ditemukan:" << endl;
        cout << "NIM: " << mahasiswa[foundIdx].nim << "\nNama: " << mahasiswa[foundIdx].nama 
             << "\nKehadiran: " << mahasiswa[foundIdx].persentaseKehadiran << "%\n" << endl;
    } else {
        cout << "Data tidak ditemukan!\n" << endl;
    }

    // 3. Update Data Mahasiswa
    if (foundIdx != -1) {
        cout << "=== UPDATE DATA ===" << endl;
        cout << "Mengubah persentase kehadiran " << mahasiswa[foundIdx].nama 
             << " dari " << mahasiswa[foundIdx].persentaseKehadiran << "% menjadi 100%" << endl;
        mahasiswa[foundIdx].persentaseKehadiran = 100.0;
    }

    // 4. Tampilkan Kembali Setelah Update
    cout << "\n=== DAFTAR MAHASISWA SETELAH UPDATE ===" << endl;
    for (int i = 0; i < 40; i++) {
        cout << (i + 1) << ". " << mahasiswa[i].nim << " | " << mahasiswa[i].nama 
             << " | " << mahasiswa[i].persentaseKehadiran << "%" << endl;
    }
    cout << "Total Mahasiswa: 40" << endl;

    return 0;
}