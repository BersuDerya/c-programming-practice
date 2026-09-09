// 5 sayi al tersten yazdir

#include <stdio.h>

int main()
{
    int i;
    int sayi[5];
    
    printf("5 sayi girin\n");
    for( i=0; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("girilen sayilar\n");
    for( i=0; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }

    printf("\ngirilen sayilarin tersi\n");
    for( i=4; i>=0; i--)
    {
        printf("%d\t",sayi[i]);
    }

    return 0;
}