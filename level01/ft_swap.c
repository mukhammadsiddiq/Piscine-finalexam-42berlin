#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 5;
    int b = 4;
    int *c = &a;
    int *t = &b;
    ft_swap(c, t);

    printf(" a = %d\n b = %d", a, b);
}