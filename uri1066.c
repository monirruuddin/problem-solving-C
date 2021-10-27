#include <stdio.h>
int main() {

 int i;
 int a,count=0,counta=0,countb=0,countc=0;

for ( i = 0; i <5; i++){
    scanf("%d",&a);
    if (a%2==0){
        count++;
    }
    if (a%2!=0)
    {
        counta++;
    } 
    if (a>0)
    {
        countb++;
    } 
    if (a<0)
    {
        countc++;
    }

}
 printf("%d valor(es) par(es)\n",count);
 printf("%d valor(es) impar(es)\n",counta);
 printf("%d valor(es) positivo(s)\n",countb);
 printf("%d valor(es) negativo(s)\n",countc);
 
return 0;
}


