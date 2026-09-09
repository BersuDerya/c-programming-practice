//for döngüsüyle diziyi dolaşmak

#include<stdio.h>

int main(){

    int sayilar[5]={10, 20, 30, 40, 50};
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d\n",sayilar[i]);   
    }

    return 0;
}