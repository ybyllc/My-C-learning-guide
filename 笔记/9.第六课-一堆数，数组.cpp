//一堆数组成的东西，就是数组
int a[10]//这就是10个数的数组a
//数组类型 数组名[里面的个数]
//里面有a[0]~a[9]（从0开始）

//也可以直接定义里面的数
int a[10]={1,2,3,4,5,6,7,8,9,10};
//可以先定前几个
int a[10]={1,2};
//这样，a[0]就是1，a[1]就是2


//查找数vxnmcbz,组里的数
//比如要在n个数的数组里找那个1
int n=10,a[n],i;
a[5] = 1;
for(i=0;i<n;i++)
{
    if(a[i]==1){
    printf("找到那个1了！在第%d个",i);
    }
}


//多维数组，数组里也可以有好几个数组，就很牛逼
int a[2][5]={{1,2,3,4,5},{1,2,3,4,5}};//两个数组，第1个数组里有1~5，第2个里有6~10
//例子，输出第1个数组里的第n个数
int n=5,i;
int a[2][n]={{1,2,3,4,5},{6,7,8,9,10}};
for(i=0;i<n;i++)
{
    printf("%d",a[0][i]);//输出第1个数组里的第n个数
}

//字符串也可以有数组
char a[]={'a','b','c','d'}
//字符串数组最后会自动加上一个'\0'，所以数组的字符串数比你输入的多一个
char b[9]={"我是你爹"};//一个中文是两个字节，加上一个'\n'，所以是9个
//储存中文可以参考https://blog.csdn.net/baishuiniyaonulia/article/details/78723479
//例子
int n=8,i;
char b[9]={"我是你爹"};
for(i=0;i<n;i++)
{
    printf("%c",b[i]);
}