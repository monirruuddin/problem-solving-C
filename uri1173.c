#include <stdio.h>
int main(){
   float arr[100];
   int i;
   float x;
   for (i = 0; i <100; i++){
       scanf("%f",&x);
       arr[i]=x;
       if(x<=10){
           printf("A[%d]= %.1f \n",i,x);
       }else{
           continue;
       }
   }
return 0;
}