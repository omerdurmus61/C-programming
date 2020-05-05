#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5][5];
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0)
            {
            dizi[i][j]=j+1;
            }
            else
            {
          if(j!=4)
         {
            dizi[i][j]=dizi[i-1][j+1];
         }
            dizi[i][4]=dizi[i-1][0];


            }
              }


    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",dizi[i][j]);

        }
        printf("\n");

    }

    return 0;
}
