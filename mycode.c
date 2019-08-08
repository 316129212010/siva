#include <stdio.h>

int main(void) {
    int a,p,count=0,ref,b,x;
    scanf("%d%d",&x,&p);
    b=0;
    count=0;
    while(a>1)
    {
        b=b+a;
        ref=(x*(p/100));
        a=a-ref;
        count=count+1;
        break;
    }
     printf("%d",b);
    
 
    return 0;
}
