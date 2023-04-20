#include<stdio.h>

int main()
{
    int num, count = 1;

    printf("Enter a any number\n");
    scanf("%d", &num);

    printf("\nNatural numbers from %d to %d:\n", count, num);

    while(count <= num)
    {
        printf("%d  ", count);
        count++;
    }

    printf("\n");

    return 0;
}
