#include <stdio.h>
int main(){
    int arr[100];
    int i;
    float n;
    scanf("%f",&n);
    for ( i = 0; i < 10; i++){
        
        
         int number = n/2;
         arr[i]=number;
         printf("arr[%d]= %.4f\n",i,number);


    }
    


    return 0;
}
