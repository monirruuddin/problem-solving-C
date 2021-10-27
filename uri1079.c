#include <stdio.h>
int main() {
int i,x;
double a,b,c,result;
scanf("%d",&x);


for (i = 1; i <=x; i++){
scanf("%lf %lf %lf",&a,&b,&c);
result = (2*a + 3*b + 5*c) / (2+3+5);
printf("%.1lf\n",result);
}



 return 0;
}