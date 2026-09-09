/*Kullanıcıdan 5 tane sayı al ve bir diziye kaydet.
Daha sonra bu 5 sayının içinden en büyük olanı bulup ekrana yazdır.*/

#include<stdio.h>

int main()
{
    int bers[5];
    int i;
    int max;

    printf("5 sayi girin\n");

    for( i=0 ; i<5 ; i++)
    {
        scanf("%d",&bers[i]);
    }

    printf("\ngirilen sayilar:\n");

    for( i=0 ; i<5 ; i++)
    {
        printf("%d\n",bers[i]);
    }

    max = bers[0];

     for( i=0 ; i<5 ; i++)
    {
        if(bers[i] > max)
        {
            max = bers[i];
        }
        
    }
    printf("En buyuk sayi: %d\n", max);
    
    return 0;
}