// satır okuma fgets

#include <stdio.h>

int main()
{
    char isimSoyad[20];

    printf("Adizi ve soyadinizi girin\n");

    fgets(isimSoyad,sizeof(isimSoyad), stdin);

    printf("Merhaba %s", isimSoyad);

    return 0;
}