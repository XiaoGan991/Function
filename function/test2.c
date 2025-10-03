//! 无函数写法
/*
#include<stdio.h>
int main()
{
    int year = 0;
    for (year = 2000; year <= 2500; year++)
    {
        if (year % 4 == 0 && year % 100 != 0)
        {
            printf("%d ", year);
        }
        else if (year % 400 == 0)
        {
            printf("%d ", year);
        }
    }
    return 0;
}
*/
//! 有函数写法
#include<stdio.h>
int leap_year(int t)
{
    if (t % 4 == 0 && t % 100 != 0)
    {
        return 1;
    }
    else if (t % 400 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int i = 0;
    for (i = 2000;i <= 2500;i++)
    {
        if (leap_year(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
