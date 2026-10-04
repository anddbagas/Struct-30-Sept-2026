    #include <iostream>
    #include <string>
    using namespace std;

    struct Mahasiswa {
    string nama;
    int nilai;
};

void inputData(Mahasiswa mhs[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> mhs[i].nama >> mhs[i].nilai;
    }
}

void outputData(Mahasiswa mhs[], int n) {
    for (int i = 0; i < n; i++) {
        cout << mhs[i].nama << " " << mhs[i].nilai << endl;
    }
}

int main() {
    int n;

    Mahasiswa mhs[999];

    cin >> n;

    inputData(mhs, n);
    cout << "Daftar Nilai Mahasiswa:" << endl;
    outputData(mhs, n);

    return 0;
}