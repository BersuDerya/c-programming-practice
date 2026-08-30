// asal sayi kontrolu

#include<stdio.h>

int main(){

    int sayi;
    int i = 2;
    int asal = 1;
     
    printf("sayi girin\n");
    scanf("%d",&sayi);

    if(sayi <= 1){
        asal = 0;
    }

    while (i < sayi){
        if ( sayi % i == 0){
            asal=0;
            break;
        }

        i++;

    }
    if ( asal == 1){
        printf("%d asal sayidir.\n",sayi);
    }
    else{
        printf("%d asal degildir.\n",sayi);
    }

    return 0;
    


}