#include<iostream>
#include<string>
using namespace std;
int bin[10000];
int idx=7;
char base[70] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/'};
void dectobin(int n){
  // printf("$%d\n",n);
  // 1001000
  // 1+2+4+8+16+32 = 63
  int tmp = idx;
  while (n > 0) {
    bin[tmp] = n % 2;
    n = n / 2;
    --tmp;
  }
  while(tmp>idx-8){
    bin[tmp--] = 0;
    // cout<<tmp;
  }
  // cout<<'\n';
  // for(int i=0;i<8;++i){
  //   cout<<bin[i];
  // }
  // cout<<'\n';
  idx += 8;
  // printf("--%d\n",idx);
}
int last;
void bintodec(){
  // cout<<"**";
  // for(int i=idx;i<idx+6;++i){
  //   printf("%d",bin[i]);
  // }
  // cout<<'\n';
  int sum = 0;
  sum += bin[idx]*32;
  sum += bin[idx+1]*16;
  sum += bin[idx+2]*8;
  sum += bin[idx+3]*4;
  sum += bin[idx+4]*2;
  sum += bin[idx+5];
  // sum += bin[idx+5]*2;
  // sum += bin[idx+5];
  // printf("%d\n",sum);
  printf("%c",base[sum]);
}
int main(){
  string s;
  cin>>s;
  for(int i=0;i<s.size();++i){
    dectobin(s[i]);
  }
  idx -= 8;
  // cout<<idx;
  // printf("--%d\n",(idx+1)%6);
  int n = 6 - (idx+1)%6;
  idx += n;
  // cout<<n;
  // while(idx<idx+n){
  //   ++cnt;
  //   idx += 2;
  // }
  last = idx;
  for(idx = 0;idx<last;idx+=6){
    bintodec();
  }
  for(int i=0;i<n;i+=2){
    cout<<'=';
  }
}