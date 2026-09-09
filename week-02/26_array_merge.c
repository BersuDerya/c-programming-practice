//İki Diziyi Birleştirme

#include <stdio.h>

int main()
{
    int A[5] = {1,2,3,4,5};
    int B[5] = {6,7,8,9,10};
    int C[10];
    int i;

    for(i=0; i<5; i++)
    {
        C[i] = A[i];
    }

    for(i=0; i<5; i++)
    {
        C[i + 5] = B[i];
    }

    for(i=0; i<10; i++)
    {
        printf(" %d ", C[i]);
    }

    return 0 ;
}