#include <stdio.h>
void main()
{
    int n, counter, sum = 0;

    printf("enter the value of n");
    scanf("%d", &n);
    counter = 1;
    while (counter <= n)
    {
        sum = sum + counter;
        counter = counter + 1;
    }
    printf("%d", sum);
}