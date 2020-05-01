#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,sayi,sayi1;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);

    while(i<sayi)
    {
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
        j=0;
    }
    i=0;
    j=0;
    sayi1=sayi;
    while(i<sayi-1)
    {
        while(j<sayi1-1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        sayi1=sayi1-1;
        i++;
        j=0;
    }
    return 0;
}
