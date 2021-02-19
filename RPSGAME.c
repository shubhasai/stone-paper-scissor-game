#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int grn(int n){
    srand(time(NULL));
    return rand() % n;
}
int grt(char c1,char c2){
    if(c1 == c2){
        return -1;
    }
    else if((c1 == 'R') && (c2 == 'P')){
        return 0;
    }
    else if((c1 == 'R') && (c2 == 'S')){
        return 1;
    }
    else if((c1 == 'S') && (c2 == 'P')){
        return 0;
    }
    else if((c1 == 'S') && (c2 == 'R')){
        return 0;
    }
    else if((c1 == 'P') && (c2 == 'R')){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int counter=3;
    int m,n,cs=0,ys=0;
    char uc,cc;
    char data[]={'R','P','S'};
    printf("WELCOME TO ROCK, PAPER AND SCISSOR\n");
    printf("MENU:\n\n");
    printf("PRESS 1 TO PLAY THE GAME:\nPRESS 2 TO GET HELP:\n");
    scanf("%d",&m);
    if(m==2){
        printf("-----HELP-----\n-RULES OF GAMES-\n1. Stone<Paper\n2. Paper<Scissor\n3. Scissor<Stone\nIf You Choose Greater Element You Win\n----------\n");
    }
    else{
            for(int i=0;i<3;i++){
                 printf("CHOOSE:\n1. For ROCK\n2. For PAPER\n3. For SCISSOR\n");
                 printf("-------------\n\n");
                 printf("YOUR TURN\n");
                 printf("ENTER YOUR CHOICE\n");
                 scanf("%d",&n);
                 uc=data[n-1];
                 printf("You Choosed: %c\n\n",data[n-1]);
                 printf("--------------------------\n");
                 printf("COMPUTER'S TURN\n");
                 n=grn(3)+1;
                 cc=data[n-1];
                 printf("Computer Choosed: %c\n\n",data[n-1]);
                 printf("--------------------------\n");
                 if(grt(uc,cc) == 1){
                      ys++;
                 }
                 else if(grt(uc,cc) == 0){
                     cs++;
                 }
                 else{
                     ys++;
                     cs++;
                 }
                 printf("YOUR SCORE: %d\nCOMPUTER SCORE: %d\n",ys,cs);
                 printf("%d CHANCES LEFT\n",--counter);
                 printf("----------------------------------------------------------\n");
             }
        if(ys>cs){
          printf("##----CONGRAGULATION YOU WIN----##\n");
        }
        else if(cs>ys){
          printf("COMPUTER WINS\n ##----BETTER LUCK NEXT TIME!!----##\n");
        }
        else{
          printf("##----WELL PLAYED! ITS A DRAW----##\n");
        }
    }
    return 0;
}