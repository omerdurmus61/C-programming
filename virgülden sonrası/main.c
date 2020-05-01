#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main(){
    printf("float veri tipinin min degeri: %.5g\n ",FLT_MIN);
    printf("float veri tipinin max degeri: %.5g\n",FLT_MAX);
    printf("float veri tipinin virgulden sonraki kesinligi: %.d\n",FLT_DIG);
    printf("double veri tipinin min degeri: %.5g\n",DBL_MIN);
    printf("double veri tipinin max degeri: %.5g\n",DBL_MAX);
    printf("double veri tipinin virgulden sonraki kesinligi: %d\n",DBL_DIG);
    printf("long double veri tipinin min degeri: %.5Lg\n",LDBL_MIN);
    printf("long double veri tipinin max degeri: %.5Lg\n",LDBL_MAX);
    printf("long double veri tipinin virgulden sonraki kesinligi: %d\n",LDBL_DIG);



    return 0;
}
