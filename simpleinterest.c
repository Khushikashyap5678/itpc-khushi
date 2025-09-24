#include<stdio.h>
void main()
{
    float principal;
    float time;
    float rate;
    float simpleinterest;
    printf("enter principal amount");
    scanf("%f",&principal);
    printf("enter time");
    scanf("%f",&time);
    printf("enter rate");
    scanf("%f",&rate);
    simpleinterest = principal*rate*time/100;
    printf("the simple interest is%f",simpleinterest);

}

