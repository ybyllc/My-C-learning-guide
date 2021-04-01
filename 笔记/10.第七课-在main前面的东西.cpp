//就是#include,#define这些东西
//学名叫编译预处理

//#include<xxx>意思就是导入xxx文件
//这些文件里有函数啊变量啊什么东西
#include<stdio.h>//比如stdio.h里面就有printf，scanf这些函数
//stdio.h的意思：std就是standard（标准）,io就是input和output（输入和输出）,.h是文件的后缀，类似于.cpp
//所以stdio.h就是指标准输入输出


//除了#include，还有#define这种东西
//#define是宏定义，其实就是在程序前面先定义个东西
#define a b
#define pi 3.1415926//就是先定义pi圆周率是3.1415926
#define 我 你爹//就是我是你爹的意思（不是），其实不行，因为不支持中文。。。
//它会把a都换成b
#define pr printf//你可以把shuchu或者sc定义成printf，这样你就能用拼音替换那个单词了
//这样用pr就能代替printf了



