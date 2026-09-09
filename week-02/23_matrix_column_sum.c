/*Kullanıcıdan 3×3 matris al.
Bu kez her sütunun toplamını ayrı ayrı hesaplayıp yazdır.*/

#include <stdio.h>

int main()
{
    int matris[3][3];
    int i,j;
    int toplam = 0;

    printf("3x3 matris degerlerinizi girin:\n");
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

    for(j=0; j<3; j++)
    {
        toplam = 0;
        for(i=0; i<3; i++)
        {
            toplam = toplam + matris[i][j];
        } 
        printf("%d . sutun toplami:%d\n",j+1,toplam);
    }

    return 0;
}