#include <stdio.h>
int main(){
   int i,n,x,count=0,keep[10];
   scanf("%d",&n);
    int arr[n];
   for ( i = 0; i < n; i++){
        
        scanf("%d",&x);  
         arr[i]=x;
   }
    int ss = arr[0];
   for ( i = 0; i < n; i++){
       if(ss==arr[i]){
         count++;
         if (arr[i]== arr[n]){
           keep[i]=arr[0];

         }
         ss= arr[i];
       }
   }
   
   for (int j = 0; j < n; j++){
       printf("%d\n",keep[j]);
   }


    return 0;
}

// 1. Count the double and more number.
// 2. show to smallest number in there.