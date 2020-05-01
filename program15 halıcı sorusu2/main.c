#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kod;
    float alan,ucret;
    printf("Hali tipini giriniz. [T,B,S]\n");
    scanf("%c",&kod);
    printf("Alani giriniz.\n");
    scanf("%f",&alan);
    if(kod=='T')
    {
        ucret = alan*18;
    }
    else if(kod=='B')
    {
        ucret = alan*17;
    }
    else if(kod=='S')
    {
        ucret = alan*19;
    }
    else
    {
     printf("Hatali kod.\n");
    return 0;
    }

    printf("ucret=%.2f",ucret);

    return 0;
}
