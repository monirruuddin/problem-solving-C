 #include <stdio.h>
int main(){

    int s,t,a,b,m,n,x,xx,count1=0,y,yy,count2=0,i,j,arr1[60],arr2[50];
  scanf("%d %d",&s,&t);
  scanf("%d %d",&a,&b);
  scanf("%d %d",&m,&n);

  for ( i = 0; i < m; i++){
      scanf("%d",&x);
      xx = a+x;
      arr1[i]=xx;
    
      if (s<=arr1[i] && t>=arr1[i]){
          count1++;
      }
      
      
  }
  for ( j = 0; j < n; j++){
      scanf("%d",&y);
      yy = b+y;
      arr2[j]=yy;
    
      if (s<=arr2[j] && t>=arr2[j]){
          count2++;
      }
  }
  printf("%d\n",count1);
  printf("%d\n",count2);

    
    

    return 0;
}

 
 
 
 
 