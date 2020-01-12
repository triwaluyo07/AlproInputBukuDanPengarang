#include "header.h"
int main()
{
    int banyak;
    printf("Masukkan banyak inputan: ");
    scanf("%d",&banyak);
    perpus c[banyak];
    input(c,banyak);
    cari(c,banyak);
    sort(c,banyak);
    output(c,banyak);
    return 0;
}
