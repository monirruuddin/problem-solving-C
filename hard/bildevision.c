#include <stdio.h>
int main(){

  int n,position,x,total,sum=0,totall;
  scanf("%d %d",&n,&position);
  int arr[n];
  int i;
  for (i = 0; i < n; i++){
      scanf("%d",&arr[i]);
  }
  scanf("%d",&total);
  for ( int j = 0; j < n; j++){
      if (arr[position])
      {
          arr[position]=0;
      }  
      sum = sum + arr[j];
  }


  totall= sum/2;

    if (totall==total){
       printf("Bon Appetit\n");
    }else{
        printf("%d\n",total-totall);
    }

    return 0;

}
