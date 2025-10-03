#include <stdio.h>
#include <math.h>
//! 循环写法
/*int main()
{
    int i = 0;
    //* 输出10~150的数字
    //* 判断i是不是素数
    //* 用j(2~i-1)优化为j(2~sqrt(i))去试除i，看余数等不等于1，若等于则不是
    //* 有flag==1去判断
    for (i = 10; i <= 150; i++)
    {
        int flag = 1;
        int j = 0;
        // for(j = 2; j <= i-1; j++)
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
*/
//! 函数写法
int i_prime(int t)
{
    int j = 0;
    for(j = 2; j <= sqrt(t); j++)
    {
        if(t%j == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int count = 0;
    int i = 0;
    for(i = 100; i <= 200; i++)
    {
        if(i_prime(i))
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n");
    printf("总数：");
    printf("%d",count);
    return 0;
}    