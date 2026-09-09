//Kullanıcıdan 3×3'lük bir matris al ve ardından matrisi ekrana düzgün şekilde yazdır.


#include<stdio.h>

int main()
{
    int i,j;
    int matris[3][3];

    printf("3x3 matrisinizi giriniz\n");
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++) 
       {
            scanf("%d",&matris[i][j]);
       }
    }

    printf("matrisler\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}