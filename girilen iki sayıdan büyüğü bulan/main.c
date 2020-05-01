#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b;
    printf("iki sayi giriniz\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d buyuktur %d",a,b);
    }
    else if (a<b)
    {
        printf("%d buyuktur %d",b,a);
    }
    else if(a==b)
    {
        printf("iki sayi esittir");
    }
    return 0;
}
