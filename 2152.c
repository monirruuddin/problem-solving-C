#include <stdio.h>
int main(){
   int i,n,a,b,c;
   scanf("%d",&n);
   for ( i = 1; i <=n; i++){
       scanf("%d %d %d",&a,&b,&c);

       if (a<=9 && b<=9 ){
           printf("0%d:0%d",a,b);
       }else if(a<=9){
           printf("0%d:%d",a,b);
       }else if(b<=9){
           printf("%d:0%d",a,b);
       }else{
           printf("%d:%d",a,b);
       }
       

       
       if (c==1){
           printf(" - A porta abriu!\n"); 
       }else{
           printf(" - A porta fechou!\n");
       }

   }
   
    return 0;
}
