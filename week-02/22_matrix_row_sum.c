/*Kullanıcıdan 3×3 matris al.
Sonra her satırın toplamını ayrı ayrı hesaplayıp ekrana yazdır.*/

#include <stdio.h>

int main()
{
    int matris[3][3];
    int i,j;
    int toplam=0;

    printf("3x3 matrisi giriniz\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }

    printf("matrisiniz:\n");
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
        toplam = 0;
        for(j=0; j<3; j++)
        {
            toplam = toplam + matris[i][j];
        }
        printf("%d . satir toplami %d\n",i+1,toplam);
    }

    return 0;

}