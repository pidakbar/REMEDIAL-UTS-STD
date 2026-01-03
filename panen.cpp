#include "panen.h"
#include <iostream>
using namespace std;

address createNewElm_103012430015(infotype x){
    address P;
    P = new elmList;
    P->info = x;
    P->next = NULL;
    return P;
}

void createList_103012430015(List &L){
    L.First = NULL;
}

void tambahData_103012430015(List &L, infotype x){
    address p;
    p = createNewElm_103012430015(x);

    if (p != nullptr){
        p->next = L.First;
        L.First = p;
    }
}

address panenTerbanyak_103012430015(List L){
    address p, maxaddr;

    if(L.First == nullptr){
        return nullptr;
    }

    maxaddr = L.First;
    p = L.First->next;

    while(p != nullptr){
        if(p->info.jumlahPanen > maxaddr->info.jumlahPanen){
            maxaddr = p;
        }
        p = p->next;
    }
    return maxaddr;
}

void panenBulanan_103012430015(
    List L, string bulan){
    address p;
    p = L.First;

    while(p != nullptr){
        if(p->info.bulanPanen == bulan){
            cout << "Nama tanaman: " << p->info.namaTanaman << endl;
            cout << "Jumlah panen: " << p->info.jumlahPanen << endl;
            cout << endl;
        }
        p = p->next;
    }
}
