#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grafik[10]={19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int i,a;
    for(i=0;i<10;i++)
    {
        printf("dizinin %d.elemani = %4d ---> ",i+1,grafik[i]);
        for(a=0;a<grafik[i];a++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
