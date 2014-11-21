/*
typedef char infotype[20];
typedef struct tGedung *address;
typedef struct tGedung{
    infotype NamaG;
    address NextG;
} Gedung;
*/

/* ***************** Pembuatan Papan Let's Get Rich ***************** */
void CreateKGedung(ListGedung *L)
/*I.S. Gedung terdefinisi */
/*F.S. Kompleks gedung-gedung seperti sepsifikasi game terbentuk*/
{
    /*Kamus Lokal*/
    infotype X;
    /*Algoritma*/
    First(*L) = Nil; //Insisasi
    /*Alokasi START*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "START");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, Nil);
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Oktagon*/
    X.KompleksG = '1';
    strcpy(X.NamaG, "OKTAGON");
    X.HargaBeliG =500000;
    strcpy(X.PemilikG, Nil);
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Comlabs*/
    X.KompleksG = '1';
    strcpy(X.NamaG, "COMLABS");
    X.HargaBeliG = 750000;
    strcpy(X.PemilikG, Nil);
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi TVST*/
    X.KompleksG = '2';
    strcpy(X.NamaG, "TVST");
    X.HargaBeliG = 1200000;
    strcpy(X.PemilikG, Nil);
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Telkom*/
    X.KompleksG = '2';
    strcpy(X.NamaG, "TELKOM");
    X.HargaBeliG = 1500000;
    strcpy(X.PemilikG, Nil);
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Penjara*/
    X.KompleksG = Nil;
    strcpy(X.NamaG, "PENJARA");
    X.HargaBeliG = Nil;
    strcpy(X.PemilikG, Nil);
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi K_Bengkok*/
    X.KompleksG = 'K';
    strcpy(X, "K_BENGKOK");
    X.HargaBeliG = 3500000;
    X.PemilikG = Nil;
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Kesempatan*/
    strcpy(X, "KESEMPATAN");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi GKU_Barat*/
    strcpy(X, "GKU_BARAT");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi GKU_Timur*/
    strcpy(X, "GKU_TIMUR");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Undian*/
    strcpy(X, "UNDIAN");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Aula_Barat*/
    strcpy(X, "AULA_BARAT");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Aula_Timur*/
    strcpy(X, "AULA_TIMUR");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Kesempatan*/
    strcpy(X, "KESEMPATAN");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi K_Barrack*/
    strcpy(X, "K_BARRACK");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Bus_ITB*/
    strcpy(X, "BUS_ITB");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Kesempatan*/
    strcpy(X, "KESEMPATAN");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi K_Borju*/
    strcpy(X, "K_BORJU");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Labtek_8*/
    strcpy(X, "LABTEK_8");
    P = Alokasi(X);
    InsertLast(L, P);
    /*Alokasi Lantek_6*/
    strcpy(X, "LABTEK_6");
    P = Alokasi(X);
    InsertLast(L, P);
    Next(P) = First(*L);
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
    P = malloc (sizeof(ElmtList));
    if (P!=Nil) {
        KompleksG(P) = X.KompleksG;
        strcpy(NamaG(P), X);
        HargaBeliG(P) = X.HargaBeliG;
        strcpy(PemilikG(P), X.PemilikG);
        Next(P)=Nil;
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
void InsertLast(ListGedung *L, address P)
/* I.S. Sembarang, P sudah dialokasi */
/* F.S. P ditambahkan sebagai elemen terakhir yang baru */
{
     /*Kamus Lokal*/
    address Last;
    /*Algoritma*/
    Last = First(*L);
    if (IsListEmpty(*L)) {
        Last = P;
    } else {
        while (Next(Last) != Nil) {
            Last = Next(Last);
        };
        Next(P) = Nil;
        Next(Last)= P;
    };
}
