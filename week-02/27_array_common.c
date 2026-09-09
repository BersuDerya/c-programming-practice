//İki Dizinin Ortak Elemanlarını Bulma

#include<stdio.h>

int main()
{
    int A[5]={1,2,3,4,5};
    int B[5]={3,4,5,6,7};
    int i,j;

    printf("Ortak elemanlar: ");

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(A[i] == B[j])
            {
                printf("%d",A[i]);
            }
        }
    }

}