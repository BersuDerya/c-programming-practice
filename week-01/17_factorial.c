//Kullanıcıdan bir sayı alacağız ve faktöriyelini hesaplayacağız.

#include<stdio.h>

int main(){

    int sayi;
    int faktoriyel = 1;

    printf("faktoriyelini alinmasini istediginiz sayiyi girin\n");
    scanf("%d",&sayi);
    printf("Girdigim sayi = %d\n", sayi);

    while(sayi > 0){
        faktoriyel = faktoriyel * sayi;
        sayi--;
    }

    printf("Faktoriyel = %d\n", faktoriyel);

    return 0;
}