#include <stdio.h>
int main(){
  int arr[1000];
  int i,j=0,count=0,countNumber;
  scanf("%d",&countNumber);

for (i = 0; i <1000; i++){

    
 printf("N[%d] = %d\n",i,count);
 count++;
 if (count==countNumber){
    count=0;
 }
 
}

    return 0;
}
