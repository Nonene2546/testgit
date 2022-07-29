#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int before[10000];
void print(int i){
  if(before[i]==i){
    printf("%d -> ",i);
    return;
  }
  print(before[i]);
  printf("%d -> ",i);
}

int main()
{
    int N;
    int playerNo[10000];
    char play[10000];
    int idx = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int NUMPLAYER;
        char SIGNPLAYER[2];
        scanf("%d%s", &NUMPLAYER, SIGNPLAYER);
        playerNo[idx] = NUMPLAYER;
        play[idx] = SIGNPLAYER[0];
        before[idx] = NUMPLAYER;
        ++idx;
    }

    int winner;
    for(int i=1;i<=idx;i+=2){
        if(play[i]=='C'){
            if(play[i+1]=='P'||play[i+1]=='L'){
                //i win
                winner = i;
                if(before[i]!=i){
                    int temp = before[i];
                    before[i] = before[i+1];
                    before[i+1] = temp;
                }
                else{
                    before[i] = before[i+1];
                }
            }
            else if(play[i+1]=='S'||play[i+1]=='R'){
                //i lose
                winner = i+1;
                if(before[i]!=i){
                    int temp = before[i];
                    before[i] = before[i+1];
                    before[i+1] = temp;
                }
                else{
                    before[i+1] = before[i];
                }
            }
        }
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    printf("%d %d\n",before[1],before[2]);
    print(winner);

    return 0;
}