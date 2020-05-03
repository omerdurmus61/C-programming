#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[3][3]= {
                        {3,5,6},
                        {4,2,3},
                        {4,8,7}
                    };

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%3d",dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
