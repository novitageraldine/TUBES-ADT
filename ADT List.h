
#ifndef ADTList_H
#define ADTList_H

#include <stdio.h>
#include "boolean.h"

/*Konstanta*/
#define Nil NULL

typedef struct {
    char KompleksG;
    char NamaG[15];
    long int HargaBeliG;
    char PemilikG[20];
}infotype;
typedef struct tGedung *address;
typedef struct tGedung{
    infotype InfoG;
    address NextG;
} Gedung;

/* Definisi list : */
/* List kosong : First(L) = Nil */
/* Setiap elemen dengan address P dapat diacu Info(P), Next(P) */
/* Elemen terakhir list : jika addressnya Last,
maka Next(Last) = First */
typedef struct {
    address First;
} ListGedung;



/*Selektor*/
#define KompleksG(P) (P)->InfoG.KompleksG
#define NamaG(P) (P)->InfoG.NamaG
#define HargaBeliG(P) (P)->InfoG.HargaBeliG
#define PemilikG(P) (P)->InfoG.PemilikG
#define NextG(P) (P)->NextG
#define First(LG) ((LG).First)
/* ***************** TEST LIST KOSONG ***************** */
boolean IsListEmpty(ListGedung LG);
/* Mengirim true jika list kosong */

/* ***************** Pembuatan Papan Let's Get Rich ***************** */
void CreateKGedung(ListGedung *LG);
/*I.S. Gedung terdefinisi */
/*F.S. Kompleks gedung-gedung seperti sepsifikasi game terbentuk*/

/* ***************** Manajemen Memori *****************/
address Alokasi(infotype X);
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak Nil, dan misalnya menghasilkan P, maka
Info(P) = X, Next(P) = Nil */
/* Jika alokasi berhasil, maka address tidak Nil, dan misalnya menghasilkan P, maka
Info(P) = X, Next(P) = Nil */

void Dealokasi(address *P);
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */

/* ***************** PRIMITIF BERDASARKAN ALAMAT ***************** */
/* *** PENAMBAHAN ELEMEN BERDASARKAN ALAMAT *** */
void InsertLast(ListGedung *LG, address P);
/* I.S. Sembarang, P sudah dialokasi */
/* F.S. P ditambahkan sebagai elemen terakhir yang baru */

address Search(ListGedung *LG, char NamaG[15]);

#endif // ADTList_H
