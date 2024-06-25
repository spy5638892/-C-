#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mun , i ;
    
    scanf( "%d %d" ,&mun,&i);
    
    if(mun<=i || mun%7==0)
    {
        printf("yun xing cheng li %d \n",mun); 
        
        for(i=1;i<=100;i++)
        {
            mun=mun+i;
        }
        printf("zui zhong jie guo %d %d \n",mun,i);
    }
    else
    {
        printf("yun xing shi bai");
    }

      return 0;
}
