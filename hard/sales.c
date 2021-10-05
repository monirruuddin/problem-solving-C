#include <stdio.h>
int main() {

int i,x,count=0;
scanf("%d",&x);
int arr[x];
for (i = 0; i <x; i++){
    scanf("%d",&arr[i]);
}

int max= arr[0];
for (int j = 0; j <x; j++){
    if (max==arr[j]){
        count++;
    }
}
     printf("%d\n",count);

    return 0;
}