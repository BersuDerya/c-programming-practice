// Kullanıcıdan bir metin alacağız Sonra iki sonuç büyük ve küçük olarak yazdırıcaz

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char metin[100];
    char buyuk[100];
    char kucuk[100];
    int i;

    printf("Bir metin girin: ");
    fgets(metin, sizeof(metin), stdin);

    for(i = 0; i < strlen(metin); i++)
    {
        buyuk[i] = toupper(metin[i]);
        kucuk[i] = tolower(metin[i]);
    }

    printf("Buyuk: %s", buyuk);
    printf("Kucuk: %s", kucuk);

    return 0;
}