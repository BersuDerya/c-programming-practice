//Diziyi Küçükten Büyüğe Sıralama

#include <stdio.h>

int main()
{
    int sayi[5];
    int i;
    int j;
    int temp;

    printf("bes sayi giriniz: \n");
    for( i=0; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("\ngirilen sayilar:\n");
    for( i=0; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }

    for(i=0 ; i<5; i++)
    {
        for( j=i+1; j<5; j++)
        {
            if( sayi[i] > sayi[j])
            {
                temp = sayi[i];
                sayi[i] = sayi[j];
                sayi[j] = temp;
            }
        }
    }

    printf("\nsiralanmis dizi:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t", sayi[i]);
    }

    return 0;
}