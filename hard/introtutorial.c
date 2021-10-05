#include <stdio.h>
int main() {
    int i,x,n,a;

    scanf("%d%d",&x,&n);
    int arr[n];
    for ( i = 0; i < n; i++){
        
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < n; i++){
        if (arr[i]==x){
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}