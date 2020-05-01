#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("bir gun sayisi girin:");
    scanf("%d",&day);
    if(day==1)
    {
        printf("pazartesi");
    }
    else if(day==2)
    {
        printf("sali");
    }
    else if(day==3)
    {
        printf("carsamba");
    }
    else if(day==4)
    {
        printf("persembe");
    }
    else if(day==5)
    {
        printf("cuma");
    }
    else if(day==6)
    {
        printf("cumartesi");
    }
    else if(day==7)
    {
        printf("pazar");
    }
else{
    printf("gecersiz giris");
}
    return 0;
}
