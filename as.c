#include <stdio.h>
int main(){

    // for (int i = 1; i <=19; i+=9){

    //     for (int j = 5; j <=15; j+=5){
    //        printf("%d %d \n",i,j);
    //     }
        
        
    // }

    printf("\n");
    printf("\n");
    printf("\n");

    for ( int i = 1; i <=15; i++){
        if (i%2==1){
            for (int j = 20; j <=30; j++){
                printf("%d =%d\n",i,j);
            }
        }else{
            for (int j = 30; j >=20; --j){
                printf("%d =%d\n",i,j);
            }
        }
        if(i % 3 == 0) {
            i += 3;
        }
    }
    
    
    
    return 0;
}