#include <stdio.h>
int main(){
    int arr[10];
    int i,x;
    for (i = 0; i<10 ; i++){
        scanf("%d",&x);
        arr[i]= x;
        if (x<0 || x==0){
            x=1;
        }
        printf("X[%d] = %d\n",i,x);
    }
    
    
  
    return 0;
}