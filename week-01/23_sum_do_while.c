//Kullanıcıdan sayılar alacağız. Kullanıcı 0 girene kadar sayıları topluyoruz.

#include<stdio.h>

int main(){

    int sayi;
    int toplam = 0;

    do{
        printf("sayi girin\n");
        scanf("%d",&sayi);

        toplam = toplam + sayi;

    }while( sayi != 0);

    printf("toplam = %d\n",toplam);

    return 0;
}