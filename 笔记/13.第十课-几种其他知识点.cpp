//这节课我们要学共用体，枚举和位运算，其实都不难
//结构体里面有多个变量
//而共用体是把多个变量类型合为一个变量
//枚举就是把它的值一个一个的全部列出来
//位运算，就是一个位一个位的运算

//共用体
union 共用体名 {共用体里的变量};

//比如你的成绩可能是一个数字，也可能是“不及格”，那么可以这样写
#include<stdio.h>

union uscore//uscore里可以是数字，也可以是几个汉字
{
	int score1;
	char fail[10];
};

struct student
{
    char name[10];//姓名
    union uscore score;//成绩
};

int main()
{
    struct student aaa={"aaa",100};
	struct student bbb={"bbb","不及格"};
    printf("姓名   成绩\n");

    printf("%4s%7d\n",aaa.name,aaa.score.score1);
	if (bbb.score.score1 = "不及格")
	{
		printf("%4s%7s",bbb.name,bbb.score.score1);
	}
	else printf("%4s%7d",bbb.name,bbb.score.score1);
	
    return 0;
}
//程序运行结果：
// 姓名   成绩
//  aaa    100
//  bbb 不及格


//枚举
//比如我们要让a为1,b为2,c为3,d为4,e为5,f为6
//我们可以一行一行写
#define a 1
//我们也可以这样写
#include <stdio.h>
 
enum ALPHA
{
    a=1, b, c, d, e, f//如果不让a=1，它会默认从0开始
};
 
int main()
{
    enum ALPHA alpha; 
    alpha = b;
    printf("这个字母的序号是%d",alpha);
    return 0;
}

//结果：
//这个字母的序号是2