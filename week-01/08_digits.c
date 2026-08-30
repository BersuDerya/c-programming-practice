//Sayının Basamaklarını Bulma

#include<stdio.h>

int main() {

    int sayi;

    printf("uc basamakli sayi girin\n");
    scanf("%d",&sayi);

    printf("yuzler basamagi: %d\n",sayi/100);

    printf("onlar basamagi: %d\n",(sayi/10)%10);

    printf("birler basamagi: %d\n",sayi%10);
 

}