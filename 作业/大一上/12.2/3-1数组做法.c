//输入20个以内的数，求他们的和
//例：输入1 2 3，输出6
#include<stdio.h>

int main()
{
    int y;
    int a[20]={};//新建数组
    int i = 0;
    do
    {
        scanf("%d", &a[i]);
        i++;
    } while (getchar() != '\n');//输入成数组，直到换行符
    //比如输入1 2 3，那么a[20]={1,2,3}

    for (int j = 0; j<20; j++)
    {
        y+=a[j];
    }   
    printf("%d",y);
    return 0;

}