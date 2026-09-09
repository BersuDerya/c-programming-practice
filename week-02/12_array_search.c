//dizinin içinde sayi arama

#include<stdio.h>

int main()
{
    int sayi[5];
    int i;
    int aranicak;
    int bulundu = 0;

    printf("bes sayi girin\n");
    for( i=0; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("girilen sayilar\n");
    for( i=0; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }

    printf("\naranmasini istediginiz sayiyi girin\n");
    scanf("%d",&aranicak);

    for( i=0; i<5; i++)
    {
        if( aranicak == sayi[i])
        {
            bulundu = 1;
            printf("sayi bulundu!, index: %d\n",i);
        }
    }
    if( bulundu == 0)
    {
        printf("sayi bulunamadi\n");
    }

    return 0;
}