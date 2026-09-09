//Matrisin Simetrik Olup Olmadığını Kontrol Et


#include<stdio.h>

int main()
{
    int matris[3][3];
    int i,j;
    int simetrik;

    printf("3x3 matris girin\n");
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

    simetrik = 1;

    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {
            if(matris[i][j] != matris[j][i])
            {
                simetrik = 0;
            }
        }
    }

    if( simetrik == 1)
    {
        printf("Matris simetrik <3\n");
    }
    else
    {
        printf("Matris simetrik degildir </3");
    }

    return 0;
}