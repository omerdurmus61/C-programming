#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5][5];
    int i,j,k,a;

    for(i=0;i<5;i++)
    {
         a=1;

        for(j=0;j<5;j++)
        {


            if(i>=j)
            {
                dizi[i][j]=a;
            }
            else
            {
                dizi[i][j]=0;
            }
            a++;
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
