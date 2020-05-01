#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int a = 0;
    while (a<=10){

        printf("%d\n",a);

  sleep(100);
        a = a + 1 ;
}
     return 0;
}
