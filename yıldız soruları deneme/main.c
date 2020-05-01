#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,j;
    printf("bir sayi girininz.\n");
    scanf("%d",&sayi);
    int sayi1=sayi;
/*
    for(i=0;i<sayi;i++)
    {
        for(j=0;j<=i;j++)
        {
                printf("*");
        }
        printf("\n");
    }

   // sayi1-=1;

    for(i=0;i<sayi;i++)
    {
        for(j=1;j<sayi1;j++)
        {
            printf("*");

        }
        printf("\n");
        sayi1-=1;
    }
*/


    for(i=0;i<sayi;i++)
    {
        for(j=0;j<sayi1;j++)
            {
                if(sayi1%2!=0)
                {
                    printf("*");
                }
                else
                {
                    break;
                }
            }

            if(sayi1%2!=0)
            printf("\n");
            sayi1-=1;
            if (sayi1==0)
           continue;

    }

    return 0;
}
