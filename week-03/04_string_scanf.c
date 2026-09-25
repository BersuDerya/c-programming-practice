//scanf ile String almak

#include <stdio.h>

int main()
{
    char isim[20];

    printf("Adinizi girin\n");

    scanf("%s", isim);

    printf("Merhaba %s", isim);

    return 0;
}