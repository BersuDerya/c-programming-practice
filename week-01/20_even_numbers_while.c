//1'den N'e kadar çift sayıları yazdır

#include<stdio.h>

int main(){

    int sayi;
    int i = 1;

    printf("sayi girin\n");
    scanf("%d", &sayi);

    while(i <= sayi){
        if(i % 2 == 0){
            printf("%d\n",i);
        }
        i++;
    }

}