#include<stdio.h>
int fac(int n)
{
    if (n > 1)
    {
        return n * fac(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num = 0;
    scanf("%d", &num);
    int factorial = fac(num);
    printf("%d", factorial);
    return 0;
}