// #include <stdio.h>
// int main()
// {
//    int n[20];
//    int i,value;
//    for (i = 0; i >0-1; i--){
//        scanf("%d",&value);
//        n[i]= value; 
//        printf("n[%d]=%d\n",i,value);
//    }
//     return 0;
// }









#include <stdio.h>
int main()
{
   int N[20], temp,i,j;
    for(i=0; i<20; i++)
        scanf("%d",&N[i]);
    for(i=0, j=19; i<10; i++, j--)
    {
        temp=N[i];
        N[i]=N[j];
        N[j]=temp;
    }
    for(i=0; i<20; i++)
        printf("N[%d] = %d\n",i,N[i]);
    return 0;
}