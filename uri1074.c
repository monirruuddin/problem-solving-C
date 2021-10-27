#include <stdio.h>
int main() {

int i,a,x;
scanf("%d",&x);
for ( i = 1; i <=x; i++){
    scanf("%d",&a);
    if (a%2!=0 && a<0 ){
        printf("ODD NEGATIVE\n"); 
    }
    if (a==0)
    {
        printf("NULL\n"); 
    } 
    if (a%2!=0 && a>0 )
    {
        printf("ODD POSITIVE\n"); 
    } 
    if (a%2==0 && a<0 )
    {
        printf("EVEN NEGATIVE\n"); 
    } 
    if (a%2==0 && a>0 )
    {
        printf("EVEN POSITIVE\n"); 
    } 

}
 
return 0;
}