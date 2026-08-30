/*Kullanıcıdan N alacağız ve 1’den N’e kadar olan 
çift sayıların toplamını bulacağız.*/

#include <stdio.h>

int main(){

    int i = 1;
    int sayi;
    int toplam = 0;

    printf("bir sayi girin\n");
    scanf("%d",&sayi);

    while(i <= sayi){
        if(i % 2 == 0){
            printf("%d\n", i);
            toplam = toplam + i;
        }
       i++;
    }
    printf("toplam = %d\n", toplam);
    return 0;

}