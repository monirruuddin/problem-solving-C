#include<stdio.h>
int main(){
   int i,n,x,a,b;
   float result,sum=0.0;
   scanf("%d",&n);
   for (i = 1; i <= n; i++){
       scanf("%d %d",&a,&b);

       if (1001==a){ 
           result= 1.50*b;
       }else if (1002==a){
           result= 2.50*b;
       }else if (1003==a){
           result= 3.50*b;
       }else if (1004==a){
           result= 4.50*b;
       }else if (1005==a){
           result= 5.50*b;
       }
       sum = sum+result;
       
   }

   printf("%.2f",(float)sum);
   

    return 0;

}