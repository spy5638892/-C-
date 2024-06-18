#include <stdio.h>
#include <stdlib.h>
int add(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;//无论return在那个位置，只要最终返回给int就可以！
    }
}

int cdd(int c,int d){
        return c-d;//计算c-b的差。
}
int main()
{
    int a, b, c, d, e;
    printf("给两个自定义函数中的变量，分别各自输入两个整型数值！\n");
    printf("给add函数输入两个变量值，最终输出最大值！\n");
    scanf("%d %d",&a,&b);
    e=add(a,b);
    printf("分别输入了%d和%d，其中最大值是%d  \n" ,a ,b ,e );
    printf("第二个函数调用！\n");
    printf("给cdd函数输入两个变量值，最终取两个变量值的绝对值差！\n");
    scanf("%d %d",&c,&d);
    e=cdd(c,d);
    if(e<0){
        e=-e;
        printf("分别输入了%d和%d绝对值差是%d" ,c ,d ,e );
    }
    else{
        printf("分别输入了%d和%d！绝对值差是%d"  ,c ,d ,e );
    }
    return 0;
}
