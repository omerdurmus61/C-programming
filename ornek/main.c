#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int i=0;
    while(ch!= 'x')
    {
        printf("\b\b\b");
        ch = getch();
        i++;
        printf("%d",i);

    }
    printf("\nx karakterine basildigi icin uygulama sonlandirildi");
    return 0;
}
