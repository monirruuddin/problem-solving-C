#include <stdio.h>
#include <stdlib.h>

int rev(int n){

    int rev = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    return rev;

}



int main() {


    int i,j,count=0,flag,division,wwe;
    float arr[10],start,end,result;
    scanf("%f %f %d",&start, &end, &division);
    
    for (i = start; i <=end; i++){
        arr[i]=i;
    }
    
    for ( j = start; j <= end; j++){
  
       int aa=   rev(arr[j]);

         if(abs(arr[j]-aa)%division==0){
            count= count+1;
            aa=0;
         }
             
        }

    printf("%d",count);
    

    return 0;
}















// int main()
// {
// int i=0,j=0,k=0,x=0,rem=0,sum=0,count=0;
// scanf("%d%d%d",&i,&j,&k);
// for(i;i<=j;i++)
// {
// x=i;
// while(x!=0)
// {
// rem=x%10;
// sum=(sum*10)+rem;
// x=x/10;
// }
// if(abs(i-sum)%k==0)
// count=count+1;
// sum=0;
// }
// printf("%d",count);
// return 0;
// }
