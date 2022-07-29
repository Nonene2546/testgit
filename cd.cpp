#include<iostream>
using namespace std;

int main() {
 int n;
  unsigned long long int mn=1000000000000,i,j,tmp,a,b;
  scanf("%d",&n);
  cin>>tmp;
  for(int i=1;i<n;++i){
    cin>>b;
    a = tmp;
    while(a>0){
      int t = a;
      a = b%a;
      b = t;
    }
    tmp = b;
  }
  int cnt=0;
  for(i=1;i*i<=tmp;++i){
    if(tmp%i==0){
      if(tmp/i==i)
        ++cnt;
      else
        cnt += 2;
    }
  }
  printf("%d",cnt);
 return 0;
}