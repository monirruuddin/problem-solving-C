#include <stdio.h>
int main() {
    int i,x;
    int arr[6],sum=0,summ=1; 
    for (i = 0; i <=5; i++){
       arr[i]=i;
    //    sum = sum + arr[i];
       if(arr[i]%2==0){
        sum = sum + arr[i]+1;
        printf("%d\n",sum);
       }else{
           sum = sum + (arr[i]+2);
           printf("%d\n",sum);
       }

    //    if (x == 0){
    //        h = 1;
    //    }else if(x % 2 == 0){
    //        h = 2 ** ((x/2) + 1) - 1;
    //    }else if (x % 2 == 1)
    //     h = 2 ** ((x + 3)/2) - 2;
    //     return h;


    
       
       
    }

  
    

    return 0;
}