#include <stdio.h>
int main() {
    int i,x,n,sum=0;
    scanf("%d",&x);
    int t = x*3;
    int arr[t];


 
        for (i = 0; i < t; i++){
           scanf("%d",&arr[i]);
           sum = sum+arr[i];
        }
        if(sum==0){
            printf("YES");
        }else{
            printf("NO");
        }
         
    return 0;
}