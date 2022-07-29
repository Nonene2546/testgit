#include<iostream>
using namespace std;
int main() {
  double a;
  int f = 1;
  char c;
  while(cin>>a){
    c = getchar();
    if(c!='\n') break;
    f = 0;
    // break;
  }
  if(f){
    printf("ERROR!");
    return 0;
  }
  if((int)a==a){
     printf("%d is INTEGER",(int)a);
   }
   else{
    cout<<a;
    printf(" is DECIMAL");
   }
   return 0;
}