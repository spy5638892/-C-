#include <stdio.h>
#include <stdlib.h>
int add(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;//����return���Ǹ�λ�ã�ֻҪ���շ��ظ�int�Ϳ��ԣ�
    }
}

int cdd(int c,int d){
        return c-d;//����c-b�Ĳ
}
int main()
{
    int a, b, c, d, e;
    printf("�������Զ��庯���еı������ֱ������������������ֵ��\n");
    printf("��add����������������ֵ������������ֵ��\n");
    scanf("%d %d",&a,&b);
    e=add(a,b);
    printf("�ֱ�������%d��%d���������ֵ��%d  \n" ,a ,b ,e );
    printf("�ڶ����������ã�\n");
    printf("��cdd����������������ֵ������ȡ��������ֵ�ľ���ֵ�\n");
    scanf("%d %d",&c,&d);
    e=cdd(c,d);
    if(e<0){
        e=-e;
        printf("�ֱ�������%d��%d����ֵ����%d" ,c ,d ,e );
    }
    else{
        printf("�ֱ�������%d��%d������ֵ����%d"  ,c ,d ,e );
    }
    return 0;
}