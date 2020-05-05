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


            if(i%2==0)
            {
                dizi[i][j]=1;
            }
            else if(i%2!=0 && j%2!=0)
            {
                dizi[i][j]=0;
            }
            else
            {
                dizi[i][j]=1;
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
