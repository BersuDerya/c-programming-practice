/*Kullanıcıdan 5 tane sayı al ve bu sayıları bir diziye kaydet.
Daha sonra bu 5 sayının toplamını hesaplayıp ekrana yazdır.*/

#include <stdio.h>

int main(){

    int sayilar[5];
    int i;
    int toplam = 0;

    printf("5 sayi girin\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&sayilar[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("girilen sayilar: %d\n",sayilar[i]);
        toplam = toplam + sayilar[i];
    }

    printf("toplam = %d\n",toplam);

    return 0;

    
}