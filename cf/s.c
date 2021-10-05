#include <stdio.h>
int main() {


   char ch[27] ={' ','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char inputchar[10];
    
    scanf("%c",&inputchar);
    int aa,bb,cc,dd,ee;
    int arr[5];
    int j;
    int arrr[j];


    // for ( j = 0; j < 5; j++){
    //     scanf("%d",&arrr[j]);
    // }

    for (int i = 1; i <27; i++){
       if (ch[i]==inputchar){
           printf("Yes");
       }else{
           printf("No");
       }
       
    }
    


          

    return 0;
}