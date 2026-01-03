#ifndef PANEN_H_INCLUDED
#define PANEN_H_INCLUDED

#include <string>
using namespace std;

struct tPanen {
    string namaTanaman;
    string bulanPanen;
    int jumlahPanen;
};

struct elmList {
    tPanen info;
    elmList* next;
};

struct List {
    elmList* First;
};


typedef tPanen infotype;
typedef elmList* address;


address createNewElm_103012430015(infotype x);
void createList_103012430015(List &L);
void tambahData_103012430015(List &L, infotype x);
address panenTerbanyak_103012430015(List L);
void panenBulanan_103012430015(List L, string bulan);

#endif // PANEN_H_INCLUDED
