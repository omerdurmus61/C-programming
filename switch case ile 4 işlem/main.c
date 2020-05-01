#include <stdio.h>
#include <stdlib.h>

int main()

{    float a,b;
     char operator;

    printf("Lutfen Operator giriniz\n");
    scanf("%c",&operator);

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%f%f",&a,&b);

    switch(operator)
    {
        case '+': printf("%.2f + %.2f=%.2f",a,b,a+b);
        break;
        case '-': printf("%.2f - %.2f=%.2f",a,b,a-b);
        break;
        case '*': printf("%.2f * %.2f=%.2f",a,b,a*b);
        break;
        case '/': printf("%.2f / %.2f=%.2f",a,b,a/b);
        break;
        default : printf("Hatali Giris");
        break;
    }

    return 0;
}
