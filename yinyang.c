#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a = --n;
  int b = 1;
  int c = n+2;
  for(int i=0;i<a;++i)
    printf(".");
  for(int i=0;i<b;++i)
    printf("#");
  for(int i=0;i<c;++i)
    printf("+");
  
}