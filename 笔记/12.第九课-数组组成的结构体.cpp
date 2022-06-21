//其实就是定义一种把不同类型的变量组合在一起的东西
struct 结构的名字
{
    结构里的变量
};
//比如学生的信息
struct student
{   int number;//学号
    char name[10];//姓名，最多4个字
    float score[3];//成绩，3个
    };//记得定义语句要分号;结束

//生成一个新的结构体
student s1={20920，张三，100};

//结构体的使用
s1.number    //s1里的number数据


//对结构体类型数据需要整体引用
例:  student stud2,stud1={1041101,“li si”};  

// int a[]
// a={学生，20920，100}

//差不多是这样的
struct 学生
{   int 学号;
    char 名字[10];
    float 成绩[3];
    };

//用的时候就是

学生 张三={209200101,张三,100}

//结构体这么用：比如student.name。结构体名字.变量名字



//例子：
#include<stdio.h>

struct student
{   int number;//学号
    char name[10];//姓名，最多4个字
    int score[3];//成绩，3个
};

int main()
{
    struct student abc={1,"abc",100,99,99};//一个叫abc的student结构
    printf("学号   姓名   成绩1   成绩2   成绩3\n");
    printf("%4d%7s%8d%8d%8d",abc.number,abc.name,abc.score[0],abc.score[1],abc.score[2]);
    return 0;
}

//程序运行：
//学号   姓名   成绩1   成绩2   成绩3
//  1    abc    100      99      99