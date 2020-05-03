#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j)
            dizi[i][j]=1;
            else
            dizi[i][j]=0;
            printf("%3d",dizi[i][j]);
        }
        printf("\n");
   }
    return 0;

 }
