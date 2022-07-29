#include<stdio.h>

int main(){
  int q;
  int h[100002];
  scanf("%d",&q);
  for(int i=0;i<q;++i){
    int n,x,y;
    int mx = -50;
    scanf("%d %d %d",&n,&x,&y);
    h[n] = 0;
    for(int j=0;j<n;++j){
      scanf("%d",&h[j]);
      if(mx<h[j])
        mx = h[j];
    }
    int sum = y*h[0];
    // printf("--%d\n",sum);
    int ans = -1;
    for(int j=1;j<n+1;++j){
      // printf("##%d\n",h[j]);
      if(h[j]<h[j-1]){
        sum += x*(h[j-1]-h[j]);
      }
      else if(h[j]>h[j-1]){
        sum += y*(h[j]-h[j-1]);
      }
      // printf("**%d\n",sum);
      if(ans<sum){
        ans = sum;
      }
      if(h[j]==mx){
        sum = 0;
        continue;
      }
    }
    printf("%d\n",ans);
  }
}