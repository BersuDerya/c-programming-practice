//Şimdi 3 basamaklı bir sayının rakamlarını ters çevireceğiz.

#include<stdio.h>

int main() {

   
    int yuzler,onlar,birler;
    int sayi;

    printf("uc basamakli sayi girin\n");
    scanf("%d",&sayi);

    yuzler = sayi/100;
    onlar = (sayi/10)%10;
    birler =sayi%10;

    printf("ters cevrilmis hali: %d%d%d\n",birler,onlar,yuzler);

    return 0;

}