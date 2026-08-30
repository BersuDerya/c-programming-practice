//Sayıyı ters çevirme → 12345 → 543

#include <stdio.h>

int main(){

    int sayi;
    int ters = 0;
    int basamak;

    printf("bir sayi girin\n");
    scanf("%d", &sayi);

    while(sayi != 0){

        basamak = sayi % 10;
        ters = ters * 10 + basamak;
        sayi = sayi / 10;
        
    }
    printf("tersi = %d\n",ters);

    return 0;
}