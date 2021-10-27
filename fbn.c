#include <stdio.h>

int searching(int n,int arr[]){
    int i;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==100){
            return 1;
        }else
        {
            return 0;
        }
        
        
    }
    
}


int main() {

int i,n,x,s;
int arr[10];
printf("Input the run Number:");
scanf("%d",&s);
for (i = 0; i <s; i++){
    scanf("%d",&x);
    arr[i]=x;
    printf("arr[%d]=%d\n",i,arr[i]);
   
}

int output =searching(n,arr);
if (output==1){
    printf("Found The Number");
}else{
    printf("Not Found The Number");
}

return 0;
}

