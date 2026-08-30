//While ile sayının basamaklarını sayma

#include<stdio.h>

int main(){
    int sayi;
    int basamak = 0;

    printf("bir sayi girin\n");
    scanf("%d",&sayi);

    while(sayi != 0){
        sayi = sayi / 10;
        basamak++;
    }
    printf("Basamak sayisi = %d\n", basamak);
    
    return 0;
}