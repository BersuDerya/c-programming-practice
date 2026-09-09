//Kullanıcıdan 5 sayı al ve diziye kaydet

#include<stdio.h>

int main(){
    
    int sayilar[5];
    int i;

    printf("5 tam sayi girin\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&sayilar[i]);
    }

    printf("\ngirdiginiz sayilar\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",sayilar[i]);
    }

    return 0;
}