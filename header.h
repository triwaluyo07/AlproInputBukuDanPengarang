#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
 char nama[25];
 char judul[25];
 int tahun;
}perpus;
void input(perpus buku[],int banyak);
int cari(perpus buku[],int banyak);
int sort(perpus buku[],int banyak);
void output(perpus buku[],int banyak);
#endif // HEADER_H_INCLUDED
