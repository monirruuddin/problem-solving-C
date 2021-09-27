#include <stdio.h>
int main(){
    int i,j,n,a,b;
    scanf("%d",&n);
    for ( i = 1; i <=n; i++){
       a=i*i;
       b=a*i;
       printf("%d %d %d\n",i,a,b);
    }
    return 0;
}
