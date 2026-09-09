//Dizideki En Küçük Sayıyı Bulma

#include <stdio.h>

int main()
{
    int bers[5];
    int i;
    int min;

    printf("5 sayi girin\n");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d", &bers[i]);
    }

    printf("\ngirdigimiz sayilar\n");

    for(i=0; i<5;i++)
    {
        printf("%d\n",bers[i]);
    }

    min = bers[0];

    for(i=0;i<5;i++)
    {
        if(bers[i] < min )
        {
            min = bers[i];
        }
    }

    printf("en kucuk sayi:%d",min);

    return 0;

}