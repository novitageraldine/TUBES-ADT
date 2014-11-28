#include "ADT List.h"

int main () {
    /*Kamus Lokal*/
    ListGedung LG;
    address P;
    /*Algoritma*/
    CreateKGedung(&LG);
    P=NextG(First(LG));
    printf("%s", NamaG(P));
    return(0);
};
