//kullanıcıdan veri alma yok. Önce 2 boyutlu dizinin mantığını oturtacağız.

#include <stdio.h>

int main()
{
    int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;

    printf("matrisler:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%4d",matris[i][j]);
        }
        printf("\n");
    }

    return 0;

}