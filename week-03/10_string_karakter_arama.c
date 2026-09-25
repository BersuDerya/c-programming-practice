//String İçinde Karakter Arama

#include <stdio.h>
#include <string.h>

int main()
{
    char metin[] = "Bersu";
    char aranan;
    int i;
    int bulundu = 0;

    printf("Metin icinde aranmasini istediginiz karakteri girin\n");
    scanf(" %c", &aranan);

    for(i=0; i<strlen(metin); i++)
    {
        if(metin[i] == aranan)
        {
            bulundu = 1;
            break;
        }
    }

    if( bulundu == 1)
    {
        printf("Karakter bulundu");
    }
    else
    {
        printf("Karakter bulunamadi");
    }

    return 0;
}