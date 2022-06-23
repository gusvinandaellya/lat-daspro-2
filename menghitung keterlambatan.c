#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/
    int waktu_masuk_jam;
    int waktu_masuk_menit;
    int waktu_datang_jam;
    int waktu_datang_menit;
    int selisih;
    /*progam*/
    printf("====Progam menghitung waktu keterlabatan====\n");
    printf("\nPukul Masuk\n");
    printf("Jam masuk\t:"); scanf("%d",&waktu_masuk_jam);
    printf("Menit masuk\t:"); scanf("%d",&waktu_masuk_menit);
    printf("\n\nPukul datang\n");
    printf("Jam datang\t:"), scanf("%d",&waktu_datang_jam);
    printf("Menit datang\t:"), scanf("%d",&waktu_datang_menit);
    selisih = ((waktu_datang_jam - waktu_masuk_jam)*60) + (waktu_datang_menit - waktu_masuk_menit);
    selisih = (((waktu_datang_jam - waktu_masuk_jam)*60) + (waktu_datang_menit - waktu_masuk_menit))*60;
    printf("\nWaktu Keterlambatan(sekon):%d sekon",selisih);
    printf("\n\n=============================\n");
    printf("Gusvinanda Ellya Ruswati\n");
    printf("=============================\n");
}
