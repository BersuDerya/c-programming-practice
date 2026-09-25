//strlen() bir stringin kaç karakter olduğunu bul

#include <stdio.h>
#include <string.h>

int main()
{
    char isim[] = "Bersu";

    printf("%s merhaba\n",isim);
    printf("Karakter dizisi uzunlugu: %lu", strlen(isim));

    return 0;
}