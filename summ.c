#include <stdio.h>
void main()
{
    int d, num;
    int sum = 0;
    printf("enter a three digit number");
    scanf("%d", &num);
    while (num > 0)
    {
        d = num % 10;
        num = num / 10;
        sum = sum + d;
    }
    printf("%d", sum);
}
