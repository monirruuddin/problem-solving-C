#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[10];
    int i,n,x,sum=0;  
    scanf("%d",&n);
    for (i = 0; i <n; i++){
        scanf("%d",&x);
        arr[i]=x; 
        sum +=arr[i];
         
    }
    printf("%d ",sum);
    
    
    return 0;
}