#include<stdio.h>

int main(){

    int player_i,player_g,inter=0, gremio=0, empates=0,dis, grenais=0;

    while (1)
    {
        scanf("%d %d",&player_i, &player_g);
        grenais++;
            if(player_i>player_g){
                inter++;
            } else if(player_g>player_i){
                gremio++;
            } else
            {
                empates++;
            }
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&dis);
        if(dis==1){
            continue;
            } else if(dis==2){
                printf("%d\n",grenais);
                printf("Inter:%d\n",inter);
                printf("Gremio:%d\n",gremio);
                printf("Empates:%d\n",empates);
                        if(inter>gremio){
                        printf("Inter venceu mais\n");
                        } else if(gremio>inter){
                        printf("Gremio venceu mais\n");
                        } else
                        {
                        printf("Não houve vencedor\n");
                        }
                break;
            } 

    }
    return 0;
}



// #include<stdio.h>
// int main(){

//     int a,b,big,small;
//     scanf("%d %d",&a,&b);
//     if (a>b){
//         big= a;
//         small= b;
//     }else{
//         big= b;
//         small= a;
//     }
    
//     printf("%d\n",big);

    
//     return 0;
// }