/*Kullanıcıdan 5 sayı al ve:
En büyük sayıyı bul
En küçük sayıyı bul
İkisini ekrana yazdır*/


#include <stdio.h>

int main()
{
    int sayi[5];
    int i;
    int max;
    int min;

    printf("bes sayi girin\n");
    for ( i=0; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("girilen sayilar\n");
    for( i=0; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }

    max = sayi[0];
    min = sayi[0];

    for( i=0; i<5; i++)
    {
        if(max < sayi[i])
        {
            max = sayi[i];
        }
        else
        {
            min = sayi[i];
        }
    }
    printf("max= %d, min: %d",max,min);

    return 0;
}