//Kullanıcıdan 5 sayı al ve bu sayıların ortalamasını hesapla.

#include <stdio.h>

int main()
{
    int bers[5];
    int i;
    int toplam = 0;
    float ortalama;

    printf("5 sayi girin\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&bers[i]);
    }

    printf("\ngirilen sayilar\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",bers[i]);
    }

     for(i=0;i<5;i++)
    {
        toplam = toplam + bers[i];
    }

    ortalama = (float)toplam / 5;

    printf("ortalama : %.2f\n",ortalama);
    
    return 0;

}