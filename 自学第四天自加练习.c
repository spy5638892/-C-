#include <stdio.h>
#include <stdlib.h>
int add(int a , int b){
    return a+b;
}
#define Jks 300


//先加后用++a，先用后加a++，只要用过，下一行一定加1；

int main()
{
    int a, b,c,d;
    a=1;
    a=++a;//2
    b=a++;//b=2,a=3
    printf("%d\n",a);
    c=(a++ -(b++));//c=1,a=4,b=3;
    d=++c;//d=2,c=2
// 4,3,c2,2
        printf("%d,%d,%d,%d", a,b,c,d);
        
    return 0;
}
