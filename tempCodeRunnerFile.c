#include<stdio.h>
int main(){

    int a,b,big,small;
    scanf("%d %d",&a,&b);
    if (a>b){
        big= a;
        small= b;
    }else{
        big= b;
        small= a;
    }
    
    printf("%d\n",big);

    
    return 0;
}