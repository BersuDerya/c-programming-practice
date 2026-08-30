//bir sayı gireceğiz ve bütün rakamlarını toplayacağız.

#include <stdio.h>

int main(){

    int sayi;
    int toplam = 0;
    int basamak;

    printf("sayi girin\n");
    scanf("%d",&sayi);

    while(sayi != 0){
        basamak = sayi % 10;
        toplam = toplam + basamak;
        sayi = sayi / 10;
    }

     printf("Rakamlar toplami = %d\n", toplam);


    return 0;
}