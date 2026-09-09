//Matrisin Transpozunu Bul

#include <stdio.h>

int main()
{
    int matris[3][3];
    int i,j;

    printf("3x3 matrisi girin\n");
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

    printf("Matrisinizin transpozesi:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",matris[j][i]);
        }
        printf("\n");
    }
    return 0;

}