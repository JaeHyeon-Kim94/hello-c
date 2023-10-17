#include <stdio.h>

void main()
{
    float a, b;
    printf("두 실 입력 : ");
    scanf("%f %f", &a, &b);
    printf("%.2f + %.2f = %.23f\n", a, b, a + b);
}