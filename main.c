#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    int a, b, c, temp;

    printf("Digite um numero inteiro para a variavel A: ");
    scanf("%d", &a);

    printf("\nDigite um numero inteiro para a variavel B: ");
    scanf("%d", &b);

    printf("\nDigite um numero inteiro para a variavel C: ");
    scanf("%d", &c);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Os números em forma crescente são: %d %d %d", a, b, c);

    return 0;
}