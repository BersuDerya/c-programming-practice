/*While ile tek sayıları yazdırma*/

#include <stdio.h>

int main(){

    int sayi;
    int i = 1;

    printf("bir sayi girin\n");
    scanf("%d",&sayi);

    while(i <= sayi){
        if(i %2 != 0){
            printf("%d\n",i);
        }

        i++;
    }

    return 0;

}