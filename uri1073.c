#include <stdio.h>
int main() {

int i,a,sum=0;

scanf("%d",&a);

for (i = 1; i <=a ; i++){

    if(i%2==0){
    sum = i*i;
     printf("%d^2= %d \n",i,sum);
    }
   
    
}


return 0;
}