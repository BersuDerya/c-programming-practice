//string kopyalama

#include <stdio.h>
#include <string.h>

int main()
{
    char kaynak[] = "Bersu";
    char hedef[20];

    strcpy(hedef,kaynak);

    printf("%s",hedef);

    return 0;

}