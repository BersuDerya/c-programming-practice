//Program kullanıcıdan bir sayı isteyecek ve kullanıcı 0 
//girene kadar sayı istemeye devam edecek.

#include<stdio.h>

int main(){

    int sayi;

    do{
        printf("sayi girin\n");
        scanf("%d",&sayi);
    }
    while(sayi != 0);

    if( sayi == 0){
        printf("program bitti\n");
    }

    return 0;
}