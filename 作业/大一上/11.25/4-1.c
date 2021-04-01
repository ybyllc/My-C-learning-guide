//老师的做法
#include<stdio.h>
int main()
{
    float x,y,z;
    scanf("%f,%f", &x,&y);
    if (x>0)
       if (y>0)  z=x*x+y*y;
       else   z=x*x-y*y;
    else
        if (y>0)  z=x+y;
        else  z=x-y;
  printf("%.0f",z);
  return 0;
}