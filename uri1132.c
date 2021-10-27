#include <stdio.h>

int main()
{
    int x,y,small,big;
    scanf("%d %d",&x,&y);
    if(x>y)
    {      
        big =x;
        small=y;
    }else if(x<y){
        big=y;
        small=x;
    }else if(x==y)
    {
        big=x;
        small=y;
    }

    int i,sum=0;
    for ( i = big; i >= small; i--){
        if(i%13!=0){
            sum = sum + i;
        }
       

    }
    printf("%d\n",sum);

    return 0;
}





















// #include <stdio.h>
// int main() {
// int i,num1,num2,sum=0,big,small;
// scanf("%d %d",&num1,&num2);
//  if(num1>num2)
// {
//     num1=num2;
//     num2=num1;
// }


// for (i = num1; i <=num2; i++){
//     if (i%13!=0){
//         sum +=i;
//     }  
// }
// printf("%d\n",sum);
//     return 0;
// }