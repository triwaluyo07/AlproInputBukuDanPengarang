#include "header.h"
void input(perpus buku[],int banyak)
    {
     int i;
     for(i=0;banyak>i;i=i+1)
     {
      fflush(stdin);
      printf("Masukkan judul buku: ");
      gets(buku[i].judul);
      printf("Masukkan nama pengarang: ");
      gets(buku[i].nama);
      printf("Masukkan tahun terbit: ");
      scanf("%d",&buku[i].tahun);
      puts(" ");
     }
    }
int cari(perpus buku[],int banyak)
    {
     int i=0;
     char namapeng[25];
     fflush(stdin);
     printf("Masukkan nama yang dicari: ");
     gets(namapeng);
     while(banyak>i)
        {
         if(strcmp(buku[i].nama,namapeng)==0)
            {
             printf("Judul buku    : %s\n",buku[i].judul);
             printf("Nama pengarang: %s\n",buku[i].nama);
             printf("Tahun terbit  : %d\n",buku[i].tahun);
             return printf("%d\n",i);
            }
         else
            {
             i++;
            }
        }
    }
int sort(perpus buku[],int banyak)
    {
     int i,j,idx,temp;
     i=0;
        while(i<banyak)
        {
         idx=i;
         j=i;
         while(j<banyak)
            {
             if(buku[j].tahun<buku[idx].tahun)
                {
                 idx=j;
                }
             j++;
            }
         temp=buku[i].tahun;
         buku[i].tahun=buku[idx].tahun;
         buku[idx].tahun=temp;
         i++;
    }
    }
void output(perpus buku[],int banyak)
    {
     int i;
     for(i=0;i<banyak;i++)
        {
         printf("Judul buku    : %s\n",buku[i].judul);
         printf("Nama pengarang: %s\n",buku[i].nama);
         printf("Tahun terbit  : %d\n",buku[i].tahun);
         puts(" ");
        }
    }
