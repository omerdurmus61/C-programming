#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;

    float x,seri;

    printf("Pozitif bir tam sayi giriniz.\n");
    scanf("%d",&n);

    printf("Reel bir sayi giriniz.\n");
    scanf("%f",&x);

    printf("seri=");

    for(i=1;i<=2*n-1;i+=2)
    {
        seri+=i/pow(x,i+1);
        if(i!=2*n-1)
        printf("%d/%.2f^%d+",i,x,i+1);
        else
        printf("%d/%.2f^%d",i,x,i+1);
    }

    printf("\ntoplam seri=%.2f",seri);

    return 0;
}
