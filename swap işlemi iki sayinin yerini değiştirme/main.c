#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,gecici;
    printf("iki sayi girini.\n");
    scanf("%d%d",&sayi1,&sayi2);

    gecici=sayi1;
    sayi1=sayi2;
    sayi2=gecici;

    printf("sayi1=%d  sayi2=%d",sayi1,sayi2);
    return 0;
}
