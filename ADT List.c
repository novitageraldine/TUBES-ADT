
#include "ADT List.h"

/* ***************** TEST LIST KOSONG ***************** */
boolean IsListEmpty(ListGedung LG)
/* Mengirim true jika list kosong */
{
    return(First(LG)==Nil);
}

/* ***************** Pembuatan Papan Let's Get Rich ***************** */
void CreateKGedung(ListGedung * LG)
/*I.S. Gedung terdefinisi */
/*F.S. Kompleks gedung-gedung seperti sepsifikasi game terbentuk*/
{
    /*Kamus Lokal*/
    infotype X;
    address P;
    /*Algoritma*/
    First(*LG) = Nil; //Insisasi
    /*Alokasi START*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "START");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Oktagon*/
    X.KompleksG = '1';
    strcpy(X.NamaG, "OKTAGON");
    X.HargaBeliG =500000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Comlabs*/
    X.KompleksG = '1';
    strcpy(X.NamaG, "COMLABS");
    X.HargaBeliG = 750000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi TVST*/
    X.KompleksG = '2';
    strcpy(X.NamaG, "TVST");
    X.HargaBeliG = 1200000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Telkom*/
    X.KompleksG = '2';
    strcpy(X.NamaG, "TELKOM");
    X.HargaBeliG = 1500000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Penjara*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "PENJARA");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi K_Bengkok*/
    X.KompleksG = 'K';
    strcpy(X.NamaG, "K_BENGKOK");
    X.HargaBeliG = 3500000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Kesempatan*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "KESEMPATAN");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi GKU_Barat*/
    X.KompleksG = '3';
    strcpy(X.NamaG, "GKU_BARAT");
    X.HargaBeliG = 1900000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi GKU_Timur*/
    X.KompleksG = '3';
    strcpy(X.NamaG, "GKU_TIMUR");
    X.HargaBeliG = 2300000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Undian*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "UNDIAN");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Aula_Barat*/
    X.KompleksG = '4';
    strcpy(X.NamaG, "AULA_BARAT");
    X.HargaBeliG = 2700000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Aula_Timur*/
    X.KompleksG = '4';
    strcpy(X.NamaG, "AULA_TIMUR");
    X.HargaBeliG = 3100000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Kesempatan*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "KESEMPATAN");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi K_Barrack*/
    X.KompleksG = 'K';
    strcpy(X.NamaG, "K_BARRACK");
    X.HargaBeliG = 3500000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Bus_ITB*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "BUS_ITB");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Kesempatan*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "KESEMPATAN");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi K_Borju*/
    X.KompleksG = 'K';
    strcpy(X.NamaG, "K_BORJU");
    X.HargaBeliG = 3500000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Labtek_8*/
    X.KompleksG = '6';
    strcpy(X.NamaG, "LABTEK_8");
    X.HargaBeliG = 3500000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    /*Alokasi Lantek_6*/
    X.KompleksG = '6';
    strcpy(X.NamaG, "LABTEK_6");
    X.HargaBeliG = 4000000;
    strcpy(X.PemilikG, " ");
    P = Alokasi(X);
    InsertLast(&(*LG), P);
    NextG(P) = First(*LG);
    printf("%s", NamaG(P));
}

/* ***************** Manajemen Memori *****************/
address Alokasi(infotype X)
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak Nil, dan misalnya menghasilkan P, maka
Info(P) = X, Next(P) = Nil */
/* Jika alokasi berhasil, maka address tidak Nil, dan misalnya menghasilkan P, maka
Info(P) = X, Next(P) = Nil */
{
    /*Kamus Lokal*/
    address P;
    /*Algoritma*/
    P = malloc (sizeof(Gedung));
    if (P!=Nil) {
        KompleksG(P) = X.KompleksG;
        strcpy(NamaG(P), X.NamaG);
        HargaBeliG(P) = X.HargaBeliG;
        strcpy(PemilikG(P), X.PemilikG);
        NextG(P)=Nil;
        return(P);
    } else {
        return(Nil);
    }
}

void Dealokasi(address *P)
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */
{
    free(*P);
}

/* ***************** PRIMITIF BERDASARKAN ALAMAT ***************** */
/* *** PENAMBAHAN ELEMEN BERDASARKAN ALAMAT *** */
void InsertLast(ListGedung *LG, address P)
/* I.S. Sembarang, P sudah dialokasi */
/* F.S. P ditambahkan sebagai elemen terakhir yang baru */
{
     /*Kamus Lokal*/
    address Last;
    /*Algoritma*/
    Last = First(*LG);
    if (IsListEmpty(*LG)) {
        First(*LG) = P;
    } else {
        while (NextG(Last) != Nil) {
            Last = NextG(Last);
        };
        NextG(P) = Nil;
        NextG(Last)= P;
    };
}

address Search(ListGedung *LG, char X[15])
{
    /*Kamus Lokal*/
    address P;
    boolean found;
    /*Algoritma*/
    P = First(*LG);
    found = false;
    if (P==Nil) { /* List kosong*/
        return(Nil);
    } else {
        while ((P!=Nil) && (!found)) {
            if (!strcmp(NamaG(P),X)) {
                found = true;
            } else {
                P = NextG(P);
            };
        };
        if (!strcmp(NamaG(P),X)) {
            return(P);
        } else {
            return(Nil);
        };
    };
}
