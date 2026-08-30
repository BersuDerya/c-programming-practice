/*Pozitif sayı girene kadar tekrar iste*/

#include<stdio.h>

int main(){
    
    int sayi;

    do{
        printf("sayi girin\n");
        scanf("%d",&sayi);
    }while(sayi <= 0);

    printf("Pozitif sayi girdiniz!");

    return 0;
}