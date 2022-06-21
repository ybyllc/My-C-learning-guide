//头文件里包含着很多个函数
//来定义属于自己的函数吧！

//函数有两种
//标准库函数：头文件里有的，比如printf
//（头文件：系统里自带的代码
//自定义函数：头文件里没有，自己写的


//类型标识符：函数的类型，比如int整数型
//形参变量：自己定义函数的参数(形式)。
//实参变量：主程序里的参数(实际)
类型标识符 函数名(类型 形参变量;)
{
    语句
    （实参变量）
}

//例子：定义一个叫Hello的函数
void Hello()
{
    printf("你好");
    return;//函数结束
}
//写在main函数前面
//Hello();运行一次就输出一次你好。

for(i=1;i<=100;i++)
{
    printf("第%d次",i);
    Hello();
}
//来100次你好吧哈哈哈哈哈嗝

//或者写一个相加y=a+b的函数
//用自定义函数实现1+2=3
#include<stdio.h>
void jiafa(int a,int b)//输入两个整数,在函数里叫a,b
{
    printf("%d",a + b);
}
//然后在main函数里写
int main()
{
    jiafa(1,2);
    return 0;
}
//结果：
//3、

//递归的意思：自己体内调用自己

//return:返回调用点，同时将值返回
//C/C++函数如何返回多个值？（代码示例）https://www.php.cn/csharp-article-416021.html