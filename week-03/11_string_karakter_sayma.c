//kaç kere bulunduğunu sayacağız.

#include <stdio.h>
#include <string.h>

int main()
{
    char metin[] = "Kaan";
    char aranan;
    int i;
    int sayac = 0;

    printf("Aranmasini istediginiz karakteri girin\n");
    scanf(" %c", &aranan);

    for(i=0; i<strlen(metin); i++)
    {
        if(metin[i] == aranan)
        {
            sayac++;
        }
    }

    if( sayac > 0)
    {
        printf("%d kez bulundu",sayac);
    }
    else
    {
        printf("Bulunamadi");
    }

    return 0;
}