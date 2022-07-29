#include<iostream>
#include<string>
using namespace std;

unsigned long long int a[2];
int main(){
  string n;
  cin>>n;
  int i=0,j=1;
  for(char c:n){
    if(c=='.'){
      if(j){
        printf("ERROR!");
        return 0;
      }
      i = 1;
      continue;
    }
    j = 0;
    if(c<'0'||c>'9'){
      printf("ERROR!");
      return 0;
    }
    a[i] += c-48;
    a[i] *= 10;
  }
  a[0] /= 10;
  a[1] /= 10;
  if(a[1]>0){
    cout<<a[0]<<'.'<<a[1]<<" is DECIMAL";
    // printf("%d.%d is DECIMAL",a[0],a[1]);
  }
  else{
    cout<<a[0]<<" is INTEGER";
    // printf("%d is INTEGER",a[0]);
  }
}