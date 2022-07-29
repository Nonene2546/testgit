#include<stdio.h>
int main() {
  int arr[5],arri[5];
  for(int i=0;i<3;++i){
    scanf("%d",arr[i]);
    arri[i] = i;
  }
  // for(int i=0;i<3;++i){
  //   printf("%d ",arr[i]);
  // }
  // printf("\n");
  if(arr[0]>arr[1]){
    int t = arr[0];
    arr[0] = arr[1];
    arr[1] = t;
    t = arri[0];
    arri[0] = arri[1];
    arri[1] = t;
  }
  if(arr[0]>arr[2]){
    int t = arr[0];
    arr[0] = arr[2];
    arr[2] = t;
    t = arri[0];
    arri[0] = arri[2];
    arri[2] = t;
  }
  if(arr[1]>arr[2]){
    int t = arr[1];
    arr[1] = arr[2];
    arr[2] = t;
    t = arri[1];
    arri[1] = arri[2];
    arri[2] = t;
  }
  if(arr[0]+arr[1]+arr[2]!=100){
    printf("BUG");
    return 0;
  }
  if(arr[1]==arr[2]){
    printf("I DON'T KNOW");
    return 0;
  }
  char s[4][10] = {"ROCK","PAPER","SCISSORS"};
  printf("%d",arri[2]);
  printf("%s",s[arri[2]]);
 return 0;
}