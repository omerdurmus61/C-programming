#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sayi,sayi1;
    printf("bir sayi giriniz.\n");
    scanf("%d",&sayi);
    sayi1=sayi;
    for(i=0;i<sayi;i++)
    {

        for(j=0;j<sayi1;j++)
        {
            if(sayi1%2!=0)
            {
                printf("*");
            }
            else
            break;

        }

        sayi1=sayi1-1;
        if(sayi1%2!=0)

        {

        printf("\n");

        }

        else
        continue;

    }
    return 0;
}
