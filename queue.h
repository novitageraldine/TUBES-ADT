

#ifndef QUEUE_H
#define QUEUE_H

#include "boolean.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/* Modul ADT Queue – Alternatif I */
/* *** Deklarasi Queue yang diimplementasi dengan tabel kontigu *** */
/* *** HEAD dan TAIL adalah alamat elemen pertama dan terakhir *** */
/* *** Queue mampu menampung MaxEl buah elemen *** */

/* *** Konstanta *** */
#define Nil 0

/* *** Definisi elemen dan address *** */

typedef struct {
	char Nama[100]; /* nama pemain */
	int Skor; /* skor pemain */
} Pemain;

typedef Pemain infotype;
typedef int address; /* indeks tabel */

/* *** Definisi Type Queue *** */
typedef struct {
 infotype *T; /* tabel penyimpan elemen, tergantung bahasa */
 address HEAD; /* alamat penghapusan */
 address TAIL; /* alamat penambahan */
 int MaxEl; /* maksimum banyaknya elemen queue */
 } Queue;


/* Definisi Queue kosong: HEAD = Nil; TAIL = Nil. */
/* Catatan implementasi: T[0] tidak pernah dipakai */
/* Definisi akses dengan Selektor : Isilah dengan selektor yang tepat */
#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).T[Head(Q)]
#define InfoTail(Q) (Q).T[Tail(Q)]
#define MaxEl(Q) (Q).MaxEl
#define InfoHeadNama(Q) (Q).T[Head(Q)].Nama
#define InfoHeadSkor(Q) (Q).T[Head(Q)].Skor

/* *** Predikat Pemeriksaan Kondisi Queue *** */
boolean IsEmpty (Queue Q);
/* Mengirim true jika Q kosong */

boolean IsFull (Queue Q);
/* Mengirim true jika tabel penampung elemen Q sudah penuh yaitu mengandung MaxEl elemen */

int NBElmt (Queue Q);
/* Mengirimkan banyaknya elemen queue. Mengirimkan 0 jika Q kosong. */

/* *** Konstruktor *** */
void CreateEmpty (Queue *Q, int Max);
/* I.S. Max terdefinisi */
/* F.S. Sebuah Q kosong terbentuk dan salah satu kondisi sbb : */
/* Jika alokasi berhasil, tabel memori dialokasi berukuran Max */
/* atau : jika alokasi gagal, Q kosong dg Maksimum elemen=0 */
/* Proses : Melakukan alokasi memori dan membuat sebuah Q kosong */

/* *** Destruktor *** */
void DeAlokasi (Queue *Q);
/* Proses : Mengembalikan memori Q */
/* I.S. Q pernah dialokasi */
/* F.S. Q menjadi tidak terdefinisi lagi, MaxEl(Q) diset 0 */

/* *** Operator-Operator Dasar Queue *** */
void Add (Queue *Q, infotype X);
/* Proses : Menambahkan X pada Q dengan aturan FIFO */
/* I.S. Q mungkin kosong, tabel penampung elemen Q TIDAK penuh */
/* F.S. X menjadi TAIL yang baru, TAIL "maju" */

void Del (Queue *Q, infotype *X);
/* Proses: Menghapus elemen pertama pada Q dengan aturan FIFO */
/* I.S. Q tidak kosong */
/* F.S. X = nilai elemen HEAD pada I.S. */
/* Jika Queue masih isi : HEAD diset tetap = 1, elemen-elemen setelah HEAD yang */
/* lama digeser ke "kiri", TAIL = TAIL – 1 */
/* Jika Queue menjadi kosong, HEAD = TAIL = Nil. */

void CetakQueue (Queue Q);

/* MODUL Queue TAMBAHAN */

int IdxEff (Queue Q);
/* mengembalikan nilai indeks efektif tabel / jumlah elemen yang ada */

boolean IsGame (Queue Q);
/* mengembalikan true apabila kondisi permainan berakhir terpenuhi, yaitu */
/* salah satu pemain mendapatkan skor sebesar 3 atau */
/* hanya tinggal satu pemain yang bermain */

void CreateQueuePemain (Queue *Q, int Max);
/* I.S : Queue kosong dengan alokasi Min 2 dan Maks 4 */
/* F.S : Menghasilkan Q yang berisi informasi seluruh pemain berupa nama dengan skor awal = 0 */

void ChangeTurn (Queue *Q);
/* I.S : Queue berisi minimal 2 elemen */
/* F.S : Head(Q) diganti menjadi pemain yang berada di antrian selanjutnya */
/* Sedangkan untuk Head(Q) di awal dipindah ke antrian paling belakang Tail(Q) */

void PrintSkor (Queue Q);
/* I.S : Queue tidak kosong */
/* F.S : Menampilkan seluruh skor pemain sesuai dengan format yang telah ditentukan */

void PrintPemenang (Queue Q);

#endif

