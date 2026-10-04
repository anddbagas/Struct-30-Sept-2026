#include <iostream>
using namespace std;

struct Node {
    float info;
    Node* next;
};

struct List {
    Node* First;
};

// b. Prosedur untuk membuat list kosong
void createList(List &L) {
    L.First = nullptr;
}

// c. Prosedur untuk membuat elemen baru (elm) dengan nilai X
void createElm(float X, Node* &elm) {
    elm = new Node;
    if (elm != nullptr) {
        elm->info = X;
        elm->next = nullptr;
    }
}

// d. Prosedur insertAscending untuk memasukkan data agar selalu terurut membesar
void insertAscending(List &L, float X) {
    Node* P;
    createElm(X, P);

    if (P != nullptr) {
        // Kasus 1: List kosong ATAU elemen baru lebih kecil/sama dengan elemen pertama
        if (L.First == nullptr || X <= L.First->info) {
            P->next = L.First;
            L.First = P;
        } 
        // Kasus 2: Elemen dimasukkan di tengah atau di akhir list
        else {
            Node* Prec = L.First;
            while (Prec->next != nullptr && Prec->next->info < X) {
                Prec = Prec->next;
            }
            P->next = Prec->next;
            Prec->next = P;
        }
    }
}

// Fungsi pembantu untuk menampilkan isi list
void printList(List L) {
    Node* P = L.First;
    while (P != nullptr) {
        cout << P->info;
        if (P->next != nullptr) {
            cout << " -> ";
        }
        P = P->next;
    }
    cout << " -> NULL" << endl;
}

int main() {
    List L;
    
    // Inisialisasi list kosong
    createList(L);

    // Mengisi data satu per satu
    insertAscending(L, 10.5);
    insertAscending(L, 22.0);
    insertAscending(L, 12.9);
    insertAscending(L, 25.1);

    // Menampilkan isi list yang sudah otomatis terurut
    cout << "Isi Linked List: ";
    printList(L);

    return 0;
}