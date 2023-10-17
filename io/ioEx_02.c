#include <stdio.h>

void main()
{
    float height;
    int weight;
    printf("enter height and weight : ");
    scanf("%f %d", &height, &weight);
    
    printf("Your height, weight = %f, %d \n Your BMI = %f", height, weight, weight/(height*height));
}