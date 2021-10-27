#include <stdio.h>
int main() {

   int x,y;
   float result;
   scanf("%d %d",&x,&y);

   if(x==1){
   result = y*4.00;
   printf("Total: R$ %.2f\n",result);
   }else if (x==2){
   result = y*4.50;
   printf("Total: R$ %.2f\n",result);
   }else if (x==3){
   
   printf("Total: R$ %.2f\n",y*5.00);
   }else if (x==4){
   result = y*2.00;
   printf("Total: R$ %.2f\n",result);
   }else if (x==5){
   result = y*1.50;
   printf("Total: R$ %.2f\n",result);
   }
   

return 0;
}