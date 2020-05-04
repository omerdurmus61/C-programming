#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5][5];

    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                dizi[i][j]=1;
            }
            else
            {
                dizi[i][j]=0;
            }
        }
    }


    for(i=0;i<5;i++)
    {
        for(k=0;k<5;k++)
        {
            printf("%3d",dizi[i][k]);
        }
        printf("\n");
    }

    return 0;
}
