//matrisin içindeki en büyük ve en küçüğü sayıyı bul

#include <stdio.h>

int main()
{
    int matris[3][3];
    int i,j;
    int max,min;

    printf("3x3 matris degerlerini girin:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }

    printf("Matrisiniz:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",matris[i][j]);
        }
        printf("\n");
    }

    max = matris[0][0];
    min = matris[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(matris[i][j] > max)
            {
                max = matris[i][j];
            }
            else if(min > matris[i][j])
            {
                min = matris[i][j];
            }
        }
    }
    printf("\nEn buyuk elemani:%d\n",max);
    printf("En kucuk elemani:%d",min);

    return 0;
}