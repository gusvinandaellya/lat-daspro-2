#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* KAMUS */
    int Celcius;
    int Celtofah;
    int Celtokel;
    int Celtorea;
    printf("Masukan Jumlah Celcius\t:");
    scanf ("%i",&Celcius); //jika menggunkan scanf sebelum variabel menggunakan "&" untuk mengmbalikan alamat dari variabel
    /* Progam */
    //jika memasukan rumus variabel harus didepan,karena jika variabel dibelakang/di tengah rumus tidak akan terbaca
    Celtofah= Celcius * 9/5 + 32;
    Celtokel= Celcius + 273;
    Celtorea= Celcius * 4/5;
    //jika dalam kamus tertera "int(bilangan bulat)" makan menggunakan %i/%d
    printf ("Dalam skala celcius menunjukkan %i\n",Celcius);
    printf ("Bila dikonversi menjadi Farenheit menjadi: %i\n",Celtofah);
    printf ("Bila dikonversi menjadi Reamur menjadi: %i\n",Celtorea); //jika perintah menginginkan variabel a maka pakailah variabel a tersebut supaa hasilnya sesuai
    printf ("Bila dikonversi menjadi Kelvin menjadi: %i\n",Celtokel);
    return 0;
}
