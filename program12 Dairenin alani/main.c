#include <stdio.h>
#include <stdlib.h>
#define PI 3.141
int main()
{
    float r,alan;
    printf("Dairenin yari capini giriniz.\n");
    scanf("%f",&r);
    alan=PI*r*r;
    printf("Dairenin alani=%.2f\n",alan);
    return 0;
}
