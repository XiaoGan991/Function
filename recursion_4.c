#include<stdio.h>
int fib(int n)
{
    if(n<=2)
        return 1;
    else
        return fib(n-1) + fib(n-2);    
}
int main()
{
    int i = 0;
    scanf("%d", &i);
    int fibnasy = fib(i);
    printf("%d",fibnasy);
    return 0;
}