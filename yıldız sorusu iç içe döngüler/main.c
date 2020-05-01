#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);
    int i,j;

    for(i=0;i<sayi;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
    }


    return 0;
}
