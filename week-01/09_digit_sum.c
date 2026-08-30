//kullanıcıdan 3 basamaklı bir sayı alacağız ve rakamlarının toplamını bulacağız.

#include<stdio.h>

int main(){
    
    int sayi;
    int yuzler;
    int onlar;
    int birler;

    printf("uc basamakli sayi girin\n");
    scanf("%d",&sayi);

/*
    printf("yuzler basamagi: %d\n",yuzler=sayi/100);

    printf("onlar basamagi: %d\n",onlar=(sayi/10)%10);

    printf("birler basamagi: %d\n",birler=sayi%10);

    printf("rakamlar toplami: %d\n",yuzler+onlar+birler);
*/

    yuzler = sayi / 100;
    onlar = (sayi /10)%10;
    birler = sayi %10;

    printf("yuzler basamagi: %d\n", yuzler);
    printf("onlar basamagi: %d\n", onlar);
    printf("birler basamagi: %d\n", birler);

    printf("rakamlar toplami: %d\n", yuzler + onlar + birler);

    return 0;
}