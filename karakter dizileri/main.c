#include <stdio.h>
#include <stdlib.h>

int main()
{
    char can[]={'o','m','e','r','c','\0'};

    char dizim[]="omer\n";
    char kullanici[10];

    printf("%s",dizim);

    scanf("lutfen bir karakter dizisi giriniz\n");
    scanf("%s",&kullanici);

    printf("\n");
    printf("%s",kullanici);
    return 0;
}
