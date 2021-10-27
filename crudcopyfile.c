#include <stdio.h>
#include <stdlib.h>
int arr[100];
int size,sizee,createnumber;

// void crearearr(int initialv,int size){
//     int i;
//      for ( i = initialv; i <=size; i++){
//         int value;
//         scanf("%d",&value);
//         arr[i]=value;
//         printf("%d ",arr[i]);
//     }
// }

void fullarrayread(){
    int i;
    for (i = 1; i <=size; i++){
        if (arr[i]==0){
            printf("[Empty] ");
        }else{
            printf("%d ",arr[i]);
        }
        
    }
    printf("\n");
    printf("\n");
    
}

void showemptyposition(){
    int i;
    for (i = 1; i <=size; i++){
        if (arr[i]==0){
            printf("[%d] ",i);
        }
        
    }
    printf("\n");
    
}

int searching(int searchnumr){
    int i;
    for (i = 0; i <10; i++){
        if (arr[i]==searchnumr){
           printf("%d is found\n",arr[i]);
           return 1;
        }
    }
   printf("%d is Not found\n",searchnumr);
   printf("\n");
   printf("\n");   
}
void unumber(int uindex, int unum){
    int i;
    for (i = 0; i <10; i++){
        if (i==uindex){
            arr[uindex]=unum;
           printf("Update %d\n",arr[i]);
        }
    }
}


int main(){
   
    do
    {
        printf("input 1 to Create\n");
        printf("input 2 to Read\n");
        printf("input 3 to Update\n");
        printf("input 4 to delete\n");
        printf("input 5 to Exit The Program\n");
        int choice;
        scanf("%d",&choice);
        if(choice==1){
            int i,cinput,initialv=1;
            printf("1.Create an Array\n");
            printf("2.Insert Array Element\n");
            scanf("%d",&cinput);
            if (cinput==1){
                printf("Input the size of array:");
                scanf("%d",&size);
                
                arr[size];
                printf("Numbers of element do you want to insert:");
                scanf("%d",&createnumber);
                if (createnumber<=size){
                    printf("Insert number is okh!\n \n");
                }else{
                    printf("Insert number within %d :",size);
                     scanf("%d",&createnumber);
                }
                
                
                for ( i = 1; i <=createnumber; i++){
                    int value,position;
                    printf("input Position Numbers: ");
                    scanf("%d",&position);
                    printf("input Numbers: ");
                    scanf("%d",&value);
                    
                    arr[position]=value;
                }
                printf("\n");
                
            }else if (cinput==2){
                int n;
                printf("Do you want to create array before\n");
                printf("1.Yes\n");
                printf("2.No\n");
                scanf("%d",&n);
                if(n==2){
                    continue;
                }


                int insertarr,i,sizee,insinput,insertsize;
                printf("Do you want to insert array elements?\n");
                 printf("Here the Empty Numbers.You can Put there.\n");
               showemptyposition();
               printf("size of input:");
               scanf("%d",&insertsize);
            for ( i = 1; i <=insertsize; i++){
                    int value,position;
                    printf("input Position Numbers: ");
                    scanf("%d",&position);
                    printf("input Numbers: ");
                    scanf("%d",&value);
                    
                    arr[position]=value;
                }


            //    sizee = size+ insertarr;
            //    printf("Insert %d elements:",insertarr);
            //    for ( i = size; i <=sizee; i++){
            //        scanf("%d",&insinput);
            //        arr[i]=insinput;
            //        printf("%d ",arr[i]);
            //    }
               
            }
            
            
        }else if(choice==2){
              if (size==0){
                    printf("First Create array please\n");
                    continue;
                }

            printf("Press 1 to read full array\n");
            printf("Press 2 to read index of an array\n");
            printf("Press 3 to search index a number from array\n");


            int readnumber;
            scanf("%d",&readnumber);
            if (readnumber==1){
                fullarrayread();
            }else if (readnumber==2){
                int rindex;
                printf("Put Index Number:");
                
                while(1){
                    scanf("%d",&rindex);
                    if( 0<rindex && size>=rindex){
                         printf("Array[%d] Index Number of a array: %d",rindex,arr[rindex]);
                         break;
                    }else{
                     printf("Index Must be within 1-%d:",size);
                    }
                }
                

                printf("\n");
                printf("\n");
            }else if(readnumber==3){
                int searchnumr;
                printf("Input your seaching Number:");
                scanf("%d",&searchnumr);
                searching(searchnumr);      
            }
            
        }else if(choice==3){
                if (size==0){
                    printf("First Create array please\n");
                    continue;
                }

            int uindex,unum;
            printf("Here The full array\n");
            fullarrayread();
            printf("Do you want to update any number?\t just input index number\n");
            scanf("%d",&uindex);
            printf(" just type... update Number\n");
            scanf("%d",&unum);
            unumber(uindex,unum);

        }else if(choice==4){
            if (size==0){
                    printf("First Create array please\n");
                    continue;
            }
            int dposition,i;
            printf("Input the position which one do you want to delete\n");
            scanf("%d",&dposition);
            for (i = dposition-1; i <10; i++){
                arr[i]=arr[i+1];
            }
            for (i = 1; i <size; i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
            
        }else if(choice==5){
            exit(0);
        }else{
            printf("Press 1-5 Number:\n");
            printf("\n");
        }
            
        

    } while (1);
    
  
    return 0;
}