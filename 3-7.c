#include <stdio.h>

int main (void)
{
    int x1 , x2 , x3 , min ;

    printf("x1?: ");
    scanf("%d" , &x1);
    printf("x2?: ");
    scanf("%d" , &x2);
    printf("x3?: ");
    scanf("%d" , &x3);

    min = x1;
    if(min > x2) min = x2;
    if(min > x3) min = x3;

    printf("min = %d" , min);
    printf("おなかすいた");

    return 0;
}