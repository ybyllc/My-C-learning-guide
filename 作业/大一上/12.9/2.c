/*
【问题描述】输入一串以回车键结束的字符，分别统计字母个数、数字字符个数和其他字符个数。

【输入形式】
【输出形式】
【样例输入】

a23sw%b
【样例输出】

4,2,1
*/
#include<stdio.h>

int main()
{   
    char ch;
    int digit,others, alph;//定义输出字母个数、数字字符个数和其他字符个数
    digit=others=alph=0;//初始化，先让他们都等于0
    ch=getchar();				
    while(ch!='\n')//在换行符之前循环输入
    {   
        if (ch>='0'&&ch<='9')   digit++;//数字+1
	    else if (ch>='A' && ch<='Z'||ch>='a' &&ch<='z')  alph++;//字母+1                   
		else  others++;//其他+1
        ch=getchar();		
    }
    printf("%d,%d,%d",alph,digit,others);//输出字母个数、数字字符个数和其他字符个数
    return 0; 
}
