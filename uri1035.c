#include <stdio.h>
int main() {

int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
int var1=c+d;
int var2=a+b;
if((b>c) && (d>a) && (var1>var2) && (c>0) && (d>0) && (a%2==0)){
printf("Valores aceitos\n");
}else
{
printf("Valores nao aceitos\n");
}
return 0;
}