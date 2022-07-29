#include<iostream>
#include<string>
using namespace std;
int val[11];
int nxt[11];
int sum=0;
int find(){
  int p1=0;
  int p2=0;
  while(1){
    p1 = nxt[p1];
    p2 = nxt[nxt[p2]];
    sum += val[p1];
    if(p1==p2){
      p1 = 0;
      while(p1!=p2){
        p1 = nxt[p1];
        p2 = nxt[p2];
        sum += val[p1];
      }
      return sum;
    }
  }
}

int main(){
  for(int i=0;i<10;++i){
    char s[20];
    scanf("%[^\n]s",s);
    // if(s[0]=='j'){
    //   nxt[i] = i + s[5] - 48;
    //   continue;
    // }
    // else if(s[0]=='s'){
    //   if(s[4]=='+'){
    //     val[i] = s[5] - 48;
    //   }
    //   else{
    //     val[i] = 48 - s[5];
    //   }
    // }
    // nxt[i] = i+1;
  }
  cout<<sum;
  return 0;
}
