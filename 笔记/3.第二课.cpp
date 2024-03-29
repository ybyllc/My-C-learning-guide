//第二节课开始学另一种变量，字符串。用来显示字母文字
//然后字符串的本质是ACSII码，所以他们用整数形式输出时就会输出ASCII码，是0~100多的一个数字，表在书P296
#include <stdio.h>
int main()
{
    char x,y;//char就是定义字符串的意思
    scanf("%c",&x);//可以用上节课的输入函数，%c就是代表字符串
                   //我们也可以用另外一种,x = getchar();，x等于输入的字符串
    x = x + 32;//大写字母的ASCII码加上32就是小写字母的ASCII码
    printf("%d,%c",x,x);//输出两个整数，就会输出x的字符串和x的ASCII码
    return 0;
}
//按ctrl＋F5，编译运行，输入A试试      编译的意思是翻译成计算机的语言，也就是生成程序

//变量，符号常量，函数，数组，结构体，标识符字母和下划线开头，字母数字和下划线_组成
// \反斜杠是转义字符，把后面的字转换含义，\n的意思是回车，\102是B，102是B的ASCII码
//书第25页有转义表
//比如\n是换行，\b是回车上面的那个退格，删掉前面一个字，\t是tap(四个空格)
//它后面加ASCII码也可以代表字母(字符串)
//不过要注意它后面的进制，它后面只能用三位的八进制或者X加上两位的十六进制
//比如要输入a，a的ASCII码值是97，那么它是\141（八进制的141就是97），或者是\X61（十六进制的61就是97）