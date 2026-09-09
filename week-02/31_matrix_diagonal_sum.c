//Ana Köşegen ve Yan Köşegen Toplamı

#include <stdio.h>

int main()
{
    int matris[3][3];
    int i,j;
    int toplam = 0;

    printf("3x3 matris giriniz\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }

    printf("matrisimiz:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",matris[i][j]);
        }
        printf("\n");
    }

    // ana kosegen toplami
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if( i==j )
            {
                toplam += matris[i][j];
            }
        }
    }
    printf("Ana kosegen toplami: %d\n",toplam);

    toplam=0;
    //yan köşegen
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j == 2-i)
            {
                toplam += matris[i][j];
            }
        }
    }
    printf("Yan kosegen toplami: %d\n",toplam);

    return 0;

}