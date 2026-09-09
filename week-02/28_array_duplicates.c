//Bir dizide birden fazla kez bulunan elemanları bul

#include <stdio.h>

int main()
{
    int A[7]={1,2,3,2,4,1,5};
    int i,j;

    printf("tekrar eden elemanlar:\n");

    for(i=0; i<7; i++)
    {
        for(j=i+1; j<7; j++)
        {
            if(A[i] == A[j])
            {
                printf("%d ", A[i]);
            }
        }
    }
    return 0;
}