#include <stdio.h>

int main(){
    int i,n,x;
    scanf("%d",&n);
    for ( i = 0; i <n; i++){
        scanf("%d",&x);
        if (x>=38){
             if (x%5==3){
            printf("%d\n",x+2);
        }else if(x%5==4){
            printf("%d\n",x+1);
        }else{
            printf("%d\n",x);
        }
            
    }else{
        printf("%d\n",x);
    }
        
    }
    
   
    return 0;
}
