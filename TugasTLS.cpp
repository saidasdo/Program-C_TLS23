#include <iostream>
using namespace std;

int nilaiMatkul(int nilai, string matkul);
int main() {
    int jumlah = 0, pilihan = 0;
    double total = 0;
    int setNilai[6] = {};
    int Matdis = 0, TVM = 0, KVT = 0, FMK = 0, FFKG = 0, Progdas = 0;
    while (pilihan != 8){
        cout << "=================================";
        cout << "\n1. Matdis \t5. FFKG \n2. TVM\t\t6. Progdas "
                "\n3. KVT\t\t7. Rata-rata \n4. FMK\t\t8. Keluar\n";
        cout << "Ketik angka untuk mengakses menu :";
        cin >> pilihan;
        if (pilihan == 1){
            if (Matdis == 0)
                Matdis = nilaiMatkul(0, "Matdis");
            else
                Matdis = nilaiMatkul(Matdis, "Matdis");
            setNilai[pilihan - 1] = Matdis;
        }
        else if (pilihan == 2) {
            if (TVM == 0)
                TVM = nilaiMatkul(0, "TVM");
            else
                TVM = nilaiMatkul(TVM, "TVM");
            setNilai[pilihan - 1] = TVM;
        }
        else if (pilihan == 3) {
            if (KVT == 0)
                KVT = nilaiMatkul(0, "KVT");
            else
                KVT = nilaiMatkul(KVT, "KVT");
            setNilai[pilihan - 1] = KVT;
        }
        else if (pilihan == 4) {
            if (FMK == 0)
                FMK = nilaiMatkul(0, "FMK");
            else
                FMK = nilaiMatkul(FMK, "FMK");
            setNilai[pilihan - 1] = FMK;
        }
        else if (pilihan == 5) {
            if (FFKG == 0)
                FFKG = nilaiMatkul(0, "FFKG");
            else
                FFKG = nilaiMatkul(FFKG, "FFKG");
            setNilai[pilihan - 1] = FFKG;
        }
        else if (pilihan == 6) {
            if (TVM == 0)
                Progdas = nilaiMatkul(0, "Progdas");
            else
                Progdas = nilaiMatkul(Progdas, "Progdas");
            setNilai[pilihan - 1] = Progdas;
        }
        else if (pilihan == 7) {
            for (int i : setNilai) {
                total += i;
                jumlah++;
            }
            cout << "\nRata-rata nilaimu adalah " << total / jumlah << endl;
        }
    }
    return 0;
}

int nilaiMatkul(int nilai, string matkul) {
    char opsi;
    if (nilai == 0) {
        cout << "\nMasukkan nilai " << matkul << " :";
        cin >> nilai;
    } else {
        cout << "\nNilai " << matkul << " mu adalah " << nilai;
        cout << "\nIngin mengganti nilaimu? (y/n) :";
        cin >> opsi;
        if (opsi == 'y' || opsi == 'Y') {
            cout << "Masukkan nilai baru :";
            cin >> nilai;
            cout << endl;
        }
    }
    return nilai;
}




