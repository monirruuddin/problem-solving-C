#include <stdio.h>

int main()
{
    int x,y,small,big,j,inputnumber,i;
    scanf("%d",&inputnumber);
   
    for (j = 1; j<=inputnumber; j++){

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
        int sum=0;
        for ( i = big-1; i > small; i--){
        if(i%2==1 || i%2==-1){
            sum = sum + i;
        }
        
    }
    printf("%d\n",sum);

    }
    
    

    return 0;
}