#include <stdio.h>
#include <windows.h>

COORD coord= {0,0};
int isiarray;
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void BuatBoard ()
{
    int y;
    system("cls");
    int i;
    for(i=3;i<57;i++) //vertikal
    {
        gotoxy(5,i);
        printf("%C\n", 179);
    }
    for(i=5;i<95;i++) //horizontal
    {
        gotoxy(i,3);
        printf("%C", 196);
    }
    gotoxy(5,3);
    printf("%C\n", 218);

 for(i=3;i<57;i++) //vertikal
    {
        gotoxy(20,i);
        printf("%C\n", 179);
    }
    gotoxy(20,3);
    printf("%C\n", 194);

 for(i=5;i<95;i++) //horizontal
    {
        gotoxy(i,12);
        printf("%C", 196);
    }
    gotoxy(5,12);
    printf("%C\n", 195);
    gotoxy(20,12);
    printf("%C\n", 197);

    for(i=3;i<12;i++) //vertikal
    {
        gotoxy(35,i);
        printf("%C\n", 179);
    }
    gotoxy(35,12);
    printf("%C\n", 193);
     gotoxy(35,3);
    printf("%C\n", 194);

    for(i=3;i<12;i++) //vertikal
    {
        gotoxy(50,i);
        printf("%C\n", 179);
    }
    gotoxy(50,12);
    printf("%C\n", 193);
     gotoxy(50,3);
    printf("%C\n", 194);

    for(i=3;i<12;i++) //vertikal
    {
        gotoxy(65,i);
        printf("%C\n", 179);
    }
    gotoxy(65,12);
    printf("%C\n", 193);
    gotoxy(65,3);
    printf("%C\n", 194);

for(i=3;i<12;i++) //vertikal
    {
        gotoxy(80,i);
        printf("%C\n", 179);
    }
    gotoxy(80,12);
    printf("%C\n", 193);
    gotoxy(80,3);
    printf("%C\n", 194);

for(i=3;i<57;i++) //vertikal
    {
        gotoxy(80,i);
        printf("%C\n", 179);
    }
    gotoxy(80,3);
    printf("%C\n", 194);
    gotoxy(80,12);
    printf("%C\n", 197);

for(i=3;i<57;i++) //vertikal
    {
        gotoxy(95,i);
        printf("%C\n", 179);
    }
    gotoxy(95,3);
    printf("%C\n", 191);
    gotoxy(95,12);
    printf("%C\n", 180);

 for(i=5;i<95;i++) //horizontal
    {
        gotoxy(i,57);
        printf("%C", 196);
    }
    gotoxy(5,57);
    printf("%C\n", 192);
    gotoxy(20,57);
    printf("%C\n", 193);
    gotoxy(80,57);
    printf("%C\n", 193);
    gotoxy(95,57);
    printf("%C\n", 217);

for(i=5;i<95;i++) //horizontal
    {
        gotoxy(i,48);
        printf("%C", 196);
    }
    gotoxy(5,48);
    printf("%C\n", 195);
    gotoxy(20,48);
    printf("%C\n", 197);
    gotoxy(35,48);
    printf("%C\n", 194);
    gotoxy(50,48);
    printf("%C\n", 194);
    gotoxy(65,48);
    printf("%C\n", 194);
    gotoxy(80,48);
    printf("%C\n", 197);
    gotoxy(95,48);
    printf("%C\n", 180);

 for(i=48;i<57;i++) //vertikal
    {
        gotoxy(35,i);
        printf("%C\n", 179);
    }
    gotoxy(35,57);
    printf("%C\n", 193);
     gotoxy(35,48);
    printf("%C\n", 194);

     for(i=48;i<57;i++) //vertikal
    {
        gotoxy(50,i);
        printf("%C\n", 179);
    }
    gotoxy(50,57);
    printf("%C\n", 193);
     gotoxy(50,48);
    printf("%C\n", 194);

     for(i=48;i<57;i++) //vertikal
    {
        gotoxy(65,i);
        printf("%C\n", 179);
    }
    gotoxy(65,57);
    printf("%C\n", 193);
     gotoxy(65,48);
    printf("%C\n", 194);

 for(i=48;i<57;i++) //vertikal
    {
        gotoxy(80,i);
        printf("%C\n", 179);
    }
    gotoxy(80,57);
    printf("%C\n", 193);
     gotoxy(80,48);
    printf("%C\n", 197);

    y=21;
    while (y<=39) {
        for(i=5;i<20;i++) //horizontal dari 5,21 sampai 20,21 dan seterusnya ke bawah
    {
        gotoxy(i,y);
        printf("%C", 196);
    }
    y=y+9;
        }

    gotoxy(5,21);
    printf("%C\n", 195);
    gotoxy(20,21);
    printf("%C\n", 180);

    gotoxy(5,30);
    printf("%C\n", 195);
    gotoxy(20,30);
    printf("%C\n", 180);

    gotoxy(5,39);
    printf("%C\n", 195);
    gotoxy(20,39);
    printf("%C\n", 180);


y=21;
    while (y<=39) {
        for(i=80;i<95;i++) //horizontal dari 80,21 sampai 95,21 dan seterusnya ke bawah
    {
        gotoxy(i,y);
        printf("%C", 196);
    }
    y=y+9;
        }

    gotoxy(80,21);
    printf("%C\n", 195);
    gotoxy(95,21);
    printf("%C\n", 180);

    gotoxy(80,30);
    printf("%C\n", 195);
    gotoxy(95,30);
    printf("%C\n", 180);

    gotoxy(80,39);
    printf("%C\n", 195);
    gotoxy(95,39);
    printf("%C\n", 180);

    void AmbilArrayX()
/* Untuk mengambil isi dari Array dan mengisikan isinya pada board ganeca let's get rich */
/* AmbilArrayX digunakan untuk menuliskan X */
/* Dengan mengambil nomor indeks array (x), lalu diimplementasikan ke dalam koordinat board */
{
    int x;
    x = isiarray;
    switch(x)
    {
    case 0:
        gotoxy(10,6);
        printf("X");
        break;
    case 1:
        gotoxy(25,6);
        printf("X");
        break;
    case 2:
        gotoxy(40,8);
        printf("X");
        break;
    case 3:
        gotoxy(32,12);
        printf("X");
        break;
    case 4:
        gotoxy(39,12);
        printf("X");
        break;
    case 5:
        gotoxy(46,12);
        printf("X");
        break;
    case 6:
        gotoxy(32,16);
        printf("X");
        break;
    case 7:
        gotoxy(39,16);
        printf("X");
        break;
    case 8:
        gotoxy(46,16);
        printf("X");
        break;
    }

}


}
