#include<stdio.h>
int main() {
 int w,h;
  int cnt=0;
  scanf("%d %d",&w,&h);
  char s[w+2][h+2];
  for(int i=0;i<w;++i){
    scanf("%s",s[i]);
  }
  for(int j=0;j<h;++j){
    for(int i=0;i<w;++i){
      if(s[i][j]=='X'){
        if(cnt>0)
            printf("%d ",cnt);
        cnt = -1;
      }
      else if(i==w-1){
        printf("%d ",cnt+1);
        cnt = -1;
      }
      ++cnt;
    }
    printf("\n");
  }
  for(int i=0;i<w;++i){
    for(int j=0;j<h;++j){
      if(s[i][j]=='X'){
        if(cnt>0)
            printf("%d ",cnt);
        cnt = -1;
      }
      else if(j==h-1){
        if(cnt>0)
            printf("%d ",cnt+1);
        cnt = -1;
      }
      ++cnt;
    }
    printf("\n");
  }
 return 0;
}