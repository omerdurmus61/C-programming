#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);
    int i,j,sayi1;
    sayi1=sayi;

    for(i=0;i<sayi;i++)
    {

        for(j=0;j<sayi1;j++)
        {
            printf("*");
        }
        printf("\n");
        sayi1=sayi1-1;
    }

    return 0;
}
