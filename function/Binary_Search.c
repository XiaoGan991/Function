#include<stdio.h>
int search(int t)
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int left = 0;
    int right = 0;
    int mid = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    right = sz - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] > t)
        {
            right = mid - 1;
        }
        else if (arr[mid] < t)
        {
            left = mid + 1;
        }
        else
        {
            return 1;
        }
    }
    if (left > right)
    {
        return 0;
    }

}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = 0;
    scanf("%d", &n);
    if (search(n) == 1)
    {
        printf("找到了");
    }
    else
    {
        printf("没找到");
    }
    return 0;
}