#include<stdio.h>
void  swap(int* px , int* py)
{
    int c = *px;
    *px = *py;
    *py = c;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}