#include<stdio.h>
#include<string.h>
int main() {
 char s[100];
  scanf("%s",s);
  int L=0,R=strlen(s)-1;
  while(s[L]=='0')
    ++L;
  int idx = L;
  while(L<R){
    if(s[L]!=s[R]){
      for(int i=idx;i<strlen(s);++i){
        printf("%c",s[i]);
      }
      printf(" is NOT PALINDROME");
      return 0;
    }
    ++L;
    --R;
  }
  for(int i=idx;i<strlen(s);++i){
    printf("%c",s[i]);
  }
  printf(" is PALINDROME");
 return 0;
}