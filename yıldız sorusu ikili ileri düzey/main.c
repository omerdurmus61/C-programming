#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);
    int i,j;
    int sayi1=sayi;
    for(i=0;i<sayi;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
    }

    for(i=0;i<sayi-1;i++)
    {
        for(j=0;j<sayi1-1;j++)
        {
            printf("*");
        }
            sayi1=sayi1-1;
            printf("\n");
    }

    return 0;
}
