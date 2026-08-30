// carpim tablosu

#include<stdio.h>

int main(){

    int sayi;
    int i = 1;

    printf("sayi gir\n");
    scanf("%d",&sayi);

    while(i <= 10) {
    printf("%d x %d = %d\n", sayi, i, sayi * i);
    i++;
   }

   
}