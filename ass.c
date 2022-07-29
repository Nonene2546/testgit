#include<stdio.h>
int main(){
  int n,j=0,k=1,f=1;
  scanf("%d",&n);
  for(int i=0;i<n*n;++i,++j){
    if(i%n==n-1){
      j = -1;
      f = 1;
      printf("*\n");
      continue;
    }
    if(i<n-1){
      printf("*");
      continue;
    }
    if(j==k&&f){
      f = 0;
      ++k;
      printf("*");
      continue;
    }
    printf(" ");
  }
}