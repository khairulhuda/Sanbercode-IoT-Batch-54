#include<stdio.h>
main()
{
    char nama[20], telfon[20];
    int umur;
    printf("masukkan data diri anda\n");
    printf("Nama :");
    scanf("%s",&nama);
    printf("Umur :");
    scanf("%d", &umur);
    printf("no telfon :");
    scanf("%s", &telfon);
    printf("Hello %s, Umur %d, No telfon %s\n", nama, umur, telfon);
    printf("Bagaimana kabar anda hari ini?");
}