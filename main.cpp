#include <iostream>
#include "panen.h"

using namespace std;

int main() {
    List L;
    infotype x;
    address maxPanen;
    string bulanCari;
    int n;

    createList_103012430015(L);
    cout << "Masukkan jumlah data panen: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << endl;
        cout << "Nama tanaman   : ";
        cin >> x.namaTanaman;
        cout << "Bulan panen    : ";
        cin >> x.bulanPanen;
        cout << "Jumlah panen   : ";
        cin >> x.jumlahPanen;
        tambahData_103012430015(L, x);
    }


    maxPanen = panenTerbanyak_103012430015(L);
    if (maxPanen != nullptr) {
        cout << "\n=== PANEN TERBANYAK ===\n";
        cout << "Nama tanaman : " << maxPanen->info.namaTanaman << endl;
        cout << "Bulan panen  : " << maxPanen->info.bulanPanen << endl;
        cout << "Jumlah       : " << maxPanen->info.jumlahPanen << endl;
    } else {
        cout << "Data panen kosong";
    }


    cout << "\nMasukkan bulan yang ingin dicari: ";
    cin >> bulanCari;

    cout << "\n=== PANEN BULAN " << bulanCari << " ===\n";
    panenBulanan_103012430015(L, bulanCari);

    return 0;
}

