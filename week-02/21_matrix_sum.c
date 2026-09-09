/*Kullanıcıdan 3×3 bir matris al.
Sonra matrisin bütün elemanlarını topla ve sonucu ekrana yazdır.*/

#include<stdio.h>

int main()
{
    int matris[3][3];
    int i,j;
    int toplam=0;

    printf("3x3 matrisini girin\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }

    printf("matrisler:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",matris[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            toplam = toplam + matris[i][j];
        }
    }
    printf("\ntoplam= %d",toplam);

    return 0;


}