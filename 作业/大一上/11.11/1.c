/*	
【问题描述】输入3个字符后，按各字符ASCII码从小到大的顺序输出这些字符。
【输入形式】连续输入3个字符，中间没有任何分隔符
【输出形式】按从小到大顺序输出这3个字符
【样例输入】
xta
【样例输出】
atx
*/

#include<stdio.h>
int main()
{   /*int a,b,c,m,n,k;
    scanf("%d%d%d",&a,&b,&c);
    m=a>b?a:b;
    m=m>c?m:c;//最大值
    n=a<b?a:b;
    n=n<c?n:c;//最小值
    k=a+b+c-m-n;//中间值
    printf("%d %d %d\n",m,k,n);
    return 0;*/

    char a,b,c,m,n,k;
    //a = 'c';
    //b = 'b';
    //c = 'a';
    scanf("%c%c%c",&a,&b,&c);//输入的字母之间不用空格
    //a = getchar()
    //b = getchar();
    //c = getchar();
    m=a>b?a:b;
    m=m>c?m:c;//最大值
    n=a<b?a:b;
    n=n<c?n:c;//最小值
    k=a+b+c-m-n;//中间值
    printf("%c%c%c",n,k,m);
    return 0;
    
}