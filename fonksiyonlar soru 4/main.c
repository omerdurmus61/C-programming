#include <stdio.h>
#include <stdlib.h>

double cevreBul(double yariCap);
double alanBul(double yariCap);

int main()
{   double yariCap;
    printf("dairenin yaricapini veriniz.\n");
    scanf("%lf",&yariCap);
    printf("alan=%.2lf\n",alanBul(yariCap));
    printf("cevre=%.2lf",cevreBul(yariCap));

    return 0;
}


double cevreBul(double yariCap)
{
    return 2*3.14*yariCap;
}

double alanBul(double yariCap)
{
    return 3.14*yariCap*yariCap;
}
