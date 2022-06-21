//-------判断-------
//if如果语句，如果……就……不然就……
if(xxx表达式) 语句1;//可以加大括号{}
else 语句2
//例子：
if(x > 0)
    printf("x是正数");
else
    printf("x不是正数");
//多次if还可以用else if
if(x > 0)
    printf("x是正数");
else if (x<0)
{
    printf("x是负数");
}
else
{
    printf("x不是正负数");
}


//switch语句，相当于简化了多次if
//如果表达式的值等于case后面的数，就从这个case进入，执行完它下面的全部语句，直到break出去
//如果都不是就执行default后的语句
switch(xxx表达式){
    case 字符或者整数:语句;
    //case后面要跟一个整数，字符串或者常数运算
    ……
    default:语句;
}
//例子
x = 0
y = 1
switch(x+y){
    case 1:printf("和是1");
    default:printf("和不是1")
}

//输入一个n，计算1+2+3+...+n的值,n≤6。如果n超过6，值7*n*n–3
#include<stdio.h>
 int main()
{    int n,y=0;
     printf("请输入n:\n");
     scanf("%d",&n);
     switch(n)
     {  case 6:  y+=6;//没有break，就继续执行下面的语句
        case 5:  y+=5;
        case 4:  y+=4;			    
        case 3:  y+=3;
        case 2:  y+=2;
        case 1:  y+=1;	break;
		default : y=7*n*n-3; }
        printf("y=%d",y); 
       return 0;  }


//-------循环-------
//while循环语句
//判断while，如果表达式成立，就一直循环
while (表达式)
    语句
//例子
//一般用i指次数，i要先定义
int i=0;
while(i<10){
    printf("%d",x);
    i++;//i = i+1
    }
//一直循环运行里面的语句，直到i不小于10
//每运行一次就叫迭代

//do-while语句，倒过来的while，差不多的东西,先运行do再判断while
//do-while语句先执行循环，后判断循环条件，所以循环体至少会执行一次
int i = 0;
do
{
    printf("%d",x);
    i++;
} while (i<10);//循环10次



//for语句，上面的while的简化版
for(初始表达式;判断表达式;结束表达式;){
    语句
}
//例子
int i=0;
for(i=0;i<10;i++){//开始i=0，如果i<10就运行下面的printf，每次结束后i+1
    printf("%d",i);
}//结果：0123456789


//其他
break;//退出循环
continue;//下一次循环
goto 标号;//跳到标号的语句，一般不用