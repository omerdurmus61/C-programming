#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[3][3][2];
    int i,j,k;

    for(k=0;k<2;k++)
    {
        for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
            {

            dizi[i][j][k]=1;

            }

        }
    }

    for(k=0;k<2;k++)
    {

     for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
            {

            printf("%4d",dizi[i][j][k]);

            }
        printf("\n");
        }
        printf("\n\n\n");
    }

    return 0;
}
