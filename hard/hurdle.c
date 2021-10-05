#include <stdio.h>
int main(){

    int i,n,k,max,arr[100];


    scanf("%d %d",&n,&k);
    for ( i = 0; i < n; i++){
        int arr[n];
        scanf("%d",arr[i]);
    }
     max= arr[0]; 
    for (i = 0; i < n; i++){
        
        if (max < arr[i]){
            max=arr[i];
    
            
        }
    }
        
printf("Largest element = %d", arr[0]);

    
    return 0;

}

// for (i = 1; i < n; ++i) {
//         if (arr[0] < arr[i])
//             arr[0] = arr[i];
//     }

//     printf("Largest element = %.2f", arr[0]);





    
    
    



