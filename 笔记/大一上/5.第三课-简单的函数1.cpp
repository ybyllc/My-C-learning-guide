//增加一个sizeof(x),意思是x的长度

#include<math.h>//数学函数
x = sqrt(x);//平方根
x = fabs(x);//绝对值
x = pow(x,2);//指数（次方），平方
x = pow(x,n);//x的n次方
x = exp(x);//e的指数，次方
x = sin(x);//正弦函数

#include<ctype.h>//字符函数
x = tolower(x);//大写转小写
x = isalpha(x);//is alpha，检测字母
x = isupper(x);//is upper，检测大写字母
x = isdigit(x);//is digit，检测数字
x = isalnumx(x);//is alnumx，检测字母和数字
//如果是，就返回非0

#include<stdlib.h>//其他常用函数
x = rand();//产生一个随机数
x = srand(y);//用y的数值重新生成随机数
    //比如用现在的时间生成随机数，常用
    #include<time.h>//时间头文件
    x = srand(time(0));
exit(0);//终止(关闭）这个程序


