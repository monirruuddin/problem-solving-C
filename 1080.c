#include <stdio.h>
int main() {

int i,n,sum=1;
scanf("%d",&n);
if(n>0){
    
for ( i = 1; i <=n; i++)
{
    sum=sum*i;
}
printf("%d",sum);


}

return 0;
}

