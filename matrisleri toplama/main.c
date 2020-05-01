#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris1[3][4]={{1,2,5,7},{5,4,8,6},{7,1,6,5}};
    int matris2[3][4]={{1,8,5,7},{1,2,4,6},{6,2,3,2}};
    int matrisToplam[3][4];
    int i,j;

    for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            matrisToplam[i][j]=matris1[i][j]+matris2[i][j];
            printf("%4d",matrisToplam[i][j]);
        }
    printf("\n");
    }

    return 0;
}
