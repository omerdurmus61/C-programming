#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609
int main()
{
    float mil,km;
    printf("mil cinsinden gidilen yolu giriniz.\n");
    scanf("%f",&mil);
    km=mil*MIL;
    printf("%.2fkm",km);


    return 0;
}
