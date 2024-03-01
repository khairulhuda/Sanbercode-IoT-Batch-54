#include <stdio.h>

#include <string.h>

#define MAKS 80

main()

{

    char str1[]="Khairul Huda";

    char str2[MAKS];

    strcpy(str2, str1); /* menyalin isi str2 ke str1 */

    printf("Nama Saya : %s\n", str1);

    printf("Saya %s\n", str2);

}