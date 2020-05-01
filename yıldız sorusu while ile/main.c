#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,sayi;
    printf("bir sayi giriniz.\n");
    scanf("%d",&sayi);
    int   sayi1=sayi;
    while(i<sayi)
    {
        while(j<sayi1)
        {
            printf("*");
            j++;
        }
        j=0;
        sayi1=sayi1-1;
        printf("\n");
        i++;
    }

    return 0;
}
