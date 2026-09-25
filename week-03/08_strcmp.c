//string karşılaştırma

#include <stdio.h>
#include <string.h>

int main()
{
    char isim[]="Bersu";
    char isim2[20];

    printf("kullanici adinizi girin\n");
    scanf("%s",isim2);

    if(strcmp(isim,isim2) == 0)
    {
        printf("kullanici adinizi dogru girdiniz\n");
    }
    else 
    {
        printf("Kullanici adiniz yanlis tekrar deneyiniz\n");
    }

    return 0;
}