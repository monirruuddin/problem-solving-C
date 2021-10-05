#include <stdio.h>
int main() {


    int height=0;
   int num,n;
   scanf("%d",&n);
   for(int i =0;i<n+1;i++){
       if(i%2!=0){
        height= height*2;
    }else{
        height++;
    } 
   
    return height;
   }
     

    return 0;
}

