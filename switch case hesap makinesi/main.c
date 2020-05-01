#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char sembol;
    printf("iki adet sayi giriniz.\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("yapacaginiz islemi seciniz [+,-,/,*]");
    scanf("%c",&sembol);

   if(sembol == '+')
   {
       printf("%d",a+b);
   }
   else if(sembol == '-')
   {
       printf("%d",a-b);
   }
   else if(sembol == '/')
   {
       printf("%d",a/b);
   }
   else if(sembol == '*')
   {
       printf("%d",a*b);
   }

    return 0;
}
