#include <stdio.h>
int main(){
    int i,x,n,count=0,count1=0,max,min;
    scanf("%d",&x);
    int arr[x];
    
    for (i = 0; i < x; i++){
        scanf("%d",&arr[i]);    
    }

    max= arr[0];
    for (i = 1; i < x; i++){
        
        if (max < arr[i]){
            max=arr[i];
            count++; 
            
        }
    }
    min= arr[0];
    for ( int j = 1; j < x; j++){
        
        if (min > arr[j]){
            min=arr[j];
            count1++; 
            
        }
    }
    
    printf("%d %d",count,count1);

    return 0;

}
