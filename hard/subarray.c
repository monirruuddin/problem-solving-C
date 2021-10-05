#include <stdio.h>
int main(){

    int i,n,x,sum=0,j,count=0;
    scanf("%d",&n);
    int arr[n];
    for (i = 1; i < n; i++){
        scanf("%d",&arr[i]);
        // sum = ;
        // printf("Sum=%d\n",arr[i] + (arr[i]+1));
        // if (arr[i] + (arr[i]+1)==3){
        //     count++;
        // }      
    }

    for (int j = 1; j < n; j++){
       
        if (arr[j] + (arr[j]+1)==3){
            count++;
        }      
    }
    printf("%d",count);

    return 0;

}





    
    
    



