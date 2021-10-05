#include <stdio.h>
int main(){

int i,x,n,a,b,c;
scanf("%d",&x);
while(x--){
    scanf("%d %d %d",&a,&b,&c);
    int aa = c-a;
    int bb = c-b;

    if (aa<0){
        aa =(aa)*(-1);
       

    }
    if (bb<0){
        bb =(bb)*(-1);
       
    }
    

    if (aa==bb){
        printf("Mouse C\n");
    
    }else if (aa>bb){
        printf("Cat B\n");
       
    }else if (aa<bb){
        printf("Cat A\n");
         
    }
    

}
    return 0;
}