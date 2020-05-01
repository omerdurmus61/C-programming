#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("bir sayi giriniz\n");
    scanf("%d",&a);
    printf("bir sayi daha giriniz\n");
    scanf("%d",&b);

    if((a%2)==1)
    {
        if((b%2)==1){
            printf("a ve b sayisi tek");
        }
        else
        {
        printf("a sayisi tek b sayisi cift");
        }
    }
    else{
        if((b%2)==1)
        {
            printf("a sayisi cift b sayisi tek");
        }
        else
        {
            printf("a ve b tayisi cift");
        }
    }
    return 0;
}
