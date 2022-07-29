#include<stdio.h>
int main() {
 int x,y;
  scanf("(%d,%d)",&x,&y);
  if(x<1||x>10||y<1||y>10){
    printf("ERROR!");
    return 0;
  }
  --x;
  --y;
  for(int i=0;i<10;++i){
    for(int j=0;j<10;++j){
      if(i==y&&j==x){
        printf("@");
        continue;
      }
      printf("#");
    }
    printf("\n");
  }
 return 0;
}