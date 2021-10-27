#include <stdio.h>
int main(){
    int i,n,m,big,small;
    while (1){
        scanf("%d %d",&n,&m);
        big=n;
        small=m;

        if (n<m){
            big=m;
            small=n;
        }
        

        if (n<=0 || m<=0)
        {
            break;
        }else{
        int sum=0;
        for (i = small; i <=big; i++){
           printf("%d ",i);
           sum += i;

        }
        printf("Sum=%d\n",sum);
        }
    }
    
    return 0;
}