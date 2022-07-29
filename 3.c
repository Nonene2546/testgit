#include<stdio.h>
int main() {
 char a,b;
  a = getchar();
  b = getchar();
  if(('0'<=a<='9'&&'A'<=b<='Z'||('0'<=b<='9'&&'A'<=a<='Z'))){
    printf("%d",a+b);
    return 0;
  }
  if('A'<=a<='Z'&&'A'<=b<='Z'){
    printf("%d",a-b);
    return 0;
  }
  if('0'<=a<='9'&&'0'<=b<='9'){
    printf("%d",b-a);
    return 0;
  }
  // if('0'<=a<='9'&&'A'<=b<='Z'){
  //   printf("%d",a+b);
  //   return 0;
  // }
  // if('0'<=b<='9'&&'A'<=a<='Z'){
  //   printf("%d",a+b);
  //   return 0;
  // }
  // printf("%d",a>b?a+b:b-a);
  // if('0'<=a<='9'&&'0'<=b<='9'){
  //   printf("%d",a>b?a-b:b-a);
  // }
  // else if(('A'<=a<='Z'||'a'<=a<='z')&&('A'<=b<='Z'||'a'<=b<='z')){
  //   printf("%d",a>b?a-b:b-a);
  // }
  // else{
  //   printf("%d",a+b);
  // }
 return 0;
}