# include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x:%p\n", (void *)&x);
    printf("Value of Pointer: %d\n", *p);
    return 0;
}