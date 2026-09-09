//Diziyi Büyükten Küçüğe Sıralama

#include <stdio.h>

int main()
{
    int sayi[5];
    int i;
    int j;
    int temp;

    printf("Bes sayi girin\n");
    for(i=0 ; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("\nGirilen sayilar:\n");
    for(i=0 ; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }

    for(i=0 ; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            if(sayi[j] < sayi[j+1])
            {
                temp = sayi[j];
                sayi[j] = sayi[j+1];
                sayi[j+1] = temp;
            }
        }
    }

    printf("\nSiralam:\n");

    for(i=0 ; i<5; i++)
    {
        printf("%d\t", sayi[i]);
    }

    return 0;

}