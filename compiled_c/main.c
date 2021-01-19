#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello World From Compiled Language!\n");

    int i;
    int sum = 0x1234;

    sum += 0xABCDEF;
    for (i = 0; i < 10; i++)
    {
        sum += i;
    }
    printf("sum=%d\n", sum);
    sum = 0x2345;
}