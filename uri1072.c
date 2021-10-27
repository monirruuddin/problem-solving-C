#include <stdio.h>

int main()
{
    
   int i,n,incount=0,outcount=0,x;
   scanf("%d",&n);

   for (i = 1; i <=n; i++) {
        scanf("%d",&x);
       if(x>=10 && x<=20){
          incount++;    
       }else
       {
           outcount++;
       }      
   }

   printf("%d in\n",incount);
   printf("%d out\n",outcount);

    return 0;
}

















