//! 输入一个数1234，按1 2 3 4的形式输出
#include<stdio.h>
void print(unsigned int n)
{
    if (n > 9)             //递归结束的条件
    {
        print(n / 10);     //改变量
    }
    printf("%d ", n % 10);
}
int main()
{
    unsigned int num = 0;
    scanf("%u", &num);
    print(num);
    return 0;
}