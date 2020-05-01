#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not;
    printf("Notunuzu giriniz.\n");
    scanf("%d",&not);

    if(not < 0 || not >100)
    {
        printf("Gecersiz not.");
    }
    else if (not>=92)
    {
        printf("AA");
    }
    else if (not>=85)
    {
        printf("BA");
    }
    else if(not>=80)
    {
        printf("BB");
    }
    else if(not>=75)
    {
        printf("CB");
    }
    else if(not>=67)
    {
        printf("CB");
    }
    else if(not>=67)
    {
        printf("DC");
    }
    else if(not>=58)
    {
        printf("DC");
    }
    else if(not>=50)
    {
        printf("DD");
    }
    else if(not>=50)
    {
        printf("DD");
    }
    else
    {
        printf("FF");
    }
    return 0;
}
