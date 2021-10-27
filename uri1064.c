#include <stdio.h>
int main() {

 int i;
 int count=0;
 float avr,a,sum=0;

for ( i = 1; i <=6; i++){
    scanf("%f",&a);
    if (a>0){
        count++;
        sum +=a;
       
    }
}
printf("%d valores positivos\n",count);
avr= sum/(float)count;
printf("%.1f \n",avr); 
 
return 0;
}