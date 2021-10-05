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


    int i,j,count=0,flag;
    float arr[10],start,end,division,result;
    scanf("%f %f %f",&start, &end, &division);
    
    for (i = start; i <=end; i++){
        arr[i]=i;
    }
    
    for ( j = start; j <= end; j++){
  
       float aa=   rev(arr[j]);
       result = (arr[j]-aa)/division;

        if (result>=0){
            result = result;
            
        }else{ 
            result = result*(-1);
            
        }
        

       if (result == .0){
           flag =1;
       }
       if (flag==1){
           count++;
       }   
    }
    printf("%d\n",count);
    

    
    return 0;
}
