#include <stdio.h>
int main() {
    int i,x,n,sum1=0, sum2 = 0, sum3 =0;
    scanf("%d",&x);


    for (i=0;i<x;i++){
        for (int j=0;j<3;j++){
            scanf("%d", &n);
            if(j == 0) {
                sum1+= n;
            } else if (j == 1) {
                sum2 += n;
            } else {
                sum3 += n;
            }
        }

    }
        if(sum1 == 0 && sum2 == 0 && sum3 == 0){
            printf("YES");
        }else{
            printf("NO");
        }
          

    return 0;
}