#include<stdio.h>
#include<string.h>
int main() {
 char s[1000];
  scanf("%s",s);
  int sum=0,tmp=0;
  for(int i=0;i<strlen(s);++i){
    if(s[i]>='0'&&s[i]<='9'){
      do{
        tmp += s[i]-48;
        tmp *= 10;
        ++i;
      }while(s[i]>='0'&&s[i]<='9');
      tmp /= 10;
    }
    sum += tmp;
    tmp = 0;
  }
  if(sum/1000==0) printf("0");
  if(sum/100==0) printf("0");
  if(sum/10==0) printf("0");
  if(sum==0) printf("0");
  printf("%d",sum);
 return 0;
}